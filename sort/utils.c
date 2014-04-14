//
//  tools.c
//  sort
//
//  Created by dreaner on 14-4-14.
//  Copyright (c) 2014年 dreaner. All rights reserved.
//

#include <stdio.h>
#include "utils.h"

void exchange(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void printArray(int *p, int len){
	int i = 0;
	while(i < len){
		if(i % 5 == 0){
			printf("\n");
		}
		printf("%d ", *p);
		p++;
		i++;
	}
	printf("\n");
}
