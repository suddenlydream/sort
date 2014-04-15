//
//  tree.c
//  sort
//
//  Created by dreaner on 14-4-15.
//  Copyright (c) 2014年 dreaner. All rights reserved.
//

#include <stdio.h>
int parent(int i){
    return (i - 1) / 2;
}

int left(int i){
    return 2 * i + 1;
}

int right(int i){
    return 2 * i + 2;
}