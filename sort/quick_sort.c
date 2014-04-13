//
//  sort.c
//  sort
//
//  Created by dreaner on 14-4-13.
//  Copyright (c) 2014年 dreaner. All rights reserved.
//

#include <stdio.h>
#include "sort.h"

#define TAG "quick_sort"

void exchange(int array[], int a, int b){
    int i = array[a];
    array[a] = array[b];
    array[b] = i;
}

int partition(int array[], int start, int end){
    int x = array[end];
    int j = start;
    int i = j-1;
    
    for (; j < end ; j++) {
        if (array[j] < x) {
            i = i+1;
            exchange(array, i, j);
        }
    }
    exchange(array, i+1, end);
    return i+1;
}

int printArray(int array[], int len)
{
    for (int i = 0; i < len; i++) {
        if (i % 5 == 0) {
            printf(" \n");
        }
        printf(" %d ", array[i]);
    }
    printf(" \n");
    return 0;
}

void q_sort(int array[], int start, int end){
    if (start >= end) {
        return;
    }
    int m = partition(array, start, end);
    q_sort(array, start, m - 1);
    q_sort(array, m+1, end);
}

int quick_sort(int array[], int len)
{
//    printArray(array, len);
    q_sort(array, 0, len - 1);
    printArray(array, len);
    return 0;
}
