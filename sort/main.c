//
//  main.c
//  sort
//
//  Created by dreaner on 14-4-13.
//  Copyright (c) 2014年 dreaner. All rights reserved.
//

#include <stdio.h>
#include "utils.h"
#include "sort.h"
#include <time.h>

int main(int argc, const char * argv[])
{

    int arr1[100], arr2[100], arr3[100];
	int i = 0;
    for ( ; i < 100; i++) {
        arr1[i] = rand() % 1000;
        arr2[i] = rand() % 1000;
        arr3[i] = rand() % 1000;
    }
    
//    printArray(array, 100);
//    quick_sort(array, 10);

    clock_t t1, t2;
    t1 = clock();
    printf("begain heap_sort: %d \n", t1);
    heap_sort(arr1, 100);
    t2 = clock();
    printf("end heap_sort: %d diff: %d \n", t2, t2 - t1);
    printArray(arr1, 100);
    
    clock_t t3, t4;
    t3 = clock();
    printf("begain heap_sort_n: %d \n", t3);
    heap_sort_n(arr2, 100);
    t4 = clock();
    printf("end heap_sort_n: %d diff: %d \n", t4, t4 - t3);
    
    clock_t t5, t6;
    t5 = clock();
    printf("begain quick_sort: %d \n", t5);
    quick_sort(arr3, 100);
    t6 = clock();
    printf("end quick_sort: %d diff: %d \n", t6, t6 - t5);
    
    return 0;
}

