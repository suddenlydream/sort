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

static void max_heap(int *arr, int i, int size){
    int l = left(i);
    int r = right(i);
    int largest = i;
    if (l <= size && *(arr + l) > *(arr + i)) {
        largest = l;
    }
    if (r <= size && *(arr + r) > *(arr + largest)) {
        largest = r;
    }
    if (largest != i) {
        exchange(arr+largest, arr+i);
        max_heap(arr, largest, size);
    }
}

void build_max_heap(int *arr, int size){
	int i = size / 2;
    for (; i >= 0;  i--) {
        max_heap(arr, i, size);
    }
}

int heap_sort(int *arr, int len){
    int size = len - 1;
    build_max_heap(arr, size);
	int i = size;
    for(; i >= 1; i--){
        exchange(arr, arr + i);
        size--;
        max_heap(arr, 0, size);
    }
    return 0;
}
