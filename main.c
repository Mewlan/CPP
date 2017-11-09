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
#ifndef HDR
#define HDR "Cylinder.h"
#endif
#ifndef PI
#pragma message("PI macro activated!")
#endif

extern int lower(int c);
extern double volume(double r, double h);
extern double base(double r);
extern double lateral(double r, double h);
extern double area(double r, double h);

int main(int argc, char *argv[]) {
	dprint(main);
	printf("\n%d\n", max(2, 3));
	putchar(lower('A'));
	printf("\n%f\n", ABSDIFF(0xfff, 2.22));
	int a = 20, b = 35;
	double c = 0.3563, d = 348.34;
	swap(int, a, b)
	swap(double, c, d)
	printf("Macro int swap: %d, %d\nMacro double swap: %6g, %6g\n", a, b, c, d);
	printf("volume of cylinder = %8g, base = %8g, lateral = %8g, area = %8g\n", volume(3.0, 8.0), base(3.0), lateral(3.0, 8.0), area(3.0, 8.0));
	printf(tempFile(usr/tmp/), "newFile\n");
	printf("%d\n", cat(1, 2));
	printf("%d\n %s\n %s\n %s\n %d\n", __LINE__, __FILE__, __DATE__, __TIME__, __STDC__);
	system("pause");
	FOREVER {
	    printf("Loading");    
        for(int j = 0; j < i % 3 + 1; ++j)    
            printf(".");    
        Sleep(300);    
        system("CLS");  
	}	
	return 0;
}



