//
//  main.c
//  C_preprocessor
//
//  Created by Mewlan Musajan on 11/7/17.
//  Copyright (c) 2017 Mewlan Musajan. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "CPPCtrl.h"

extern int lower(int c);

int main(int argc, char *argv[]) {
	printf("%d", max(2, 3));
	dprint(main);
	putchar(lower('A'));
	printf("\n%f\n", ABSDIFF(0xfff, 2.22));
	int a = 20, b = 35;
	double c = 0.3563, d = 348.34;
	swap(int, a, b)
	swap(double, c, d)
	printf("Macro int swap: %d, %d\nMacro double swap: %6g, %6g\n", a, b, c, d);
	FOREVER {
	    printf("Loading");    
        for(int j = 0; j < i % 3 + 1; ++j)    
            printf(".");    
        Sleep(300);    
        system("CLS");  
	}	
	return 0;
}


