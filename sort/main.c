//
//  main.c
//  sort
//
//  Created by dreaner on 14-4-13.
//  Copyright (c) 2014年 dreaner. All rights reserved.
//

#include <stdio.h>
#include "sort.h"

int main(int argc, const char * argv[])
{

    int array[100];
    
    for (int i = 0 ; i < 100; i++) {
        array[i] = rand() % 10000;
    }
    
    quick_sort(array, 100);
    return 0;
}

