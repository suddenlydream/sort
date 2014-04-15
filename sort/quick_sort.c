//
//  sort.c
//  sort
//
//  Created by dreaner on 14-4-13.
//  Copyright (c) 2014年 dreaner. All rights reserved.
//

#include <stdio.h>
#include "sort.h"
#include "utils.h"

#define TAG "quick_sort"

static int partition(int *arr, int start, int end){
    int x = *(arr+end);
    int j = start;
    int i = j-1;
    
    for (; j < end ; j++) {
        if (*(arr+j) < x) {
            i = i+1;
            exchange(arr+i, arr+j);
        }
    }
    exchange(arr+i+1, arr+end);
    return i+1;
}

static void q_sort(int *arr, int start, int end){
    if (start >= end) {
        return;
    }
    int m = partition(arr, start, end);
    q_sort(arr, start, m - 1);
    q_sort(arr, m+1, end);
}

int quick_sort(int *arr, int len)
{
    q_sort(arr, 0, len - 1);
    return 0;
}
