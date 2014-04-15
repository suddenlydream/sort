//
//  heap_sort.c
//  sort
//
//  Created by dreaner on 14-4-14.
//  Copyright (c) 2014年 dreaner. All rights reserved.
//

#include <stdio.h>
#include "sort.h"
#include "utils.h"
#include "tree.h"

static void max_heap(int *arr, int i, int len){
    if(i >= len){
		return;
	}
    int l = left(i);
    int r = right(i);
    max_heap(arr, l, len);
    max_heap(arr, r, len);	
	int largest = i;
    if (l < len && *(arr + l) > *(arr + i)) {
        largest = l;
    }
    if (r < len && *(arr + r) > *(arr + largest)) {
        largest = r;
    }
	//printf("max_heap largest:%d i:%d \n", largest, i);
    if (largest != i) {
        exchange(arr+largest, arr+i);
    }
}

int heap_sort_n(int *arr, int len){
    max_heap(arr, 0, len);
	int i = len - 1;
	while(i > 0){
//		printf("%d step arr: %d \n", i, *arr);
        exchange(arr, arr + i);
		i--;
        max_heap(arr, 0, i);
	}
    return 0;
}
