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

int main(int argc, const char * argv[])
{

    int array[10];
	int i = 0;
    for ( ; i < 10; i++) {
        array[i] = rand() % 100;
    }
    
//    printArray(array, 100);
//    quick_sort(array, 10);
    heap_sort(array, 10);
	printArray(array, 10);
    return 0;
}

