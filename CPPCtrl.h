//
//  CPPCtrl.h
//  C_preprocessor
//
//  Created by Mewlan Musajan on 11/7/17.
//  Copyright (c) 2017 Mewlan Musajan. All rights reserved.
//

#define FOREVER for (int i = 0;;++i)	/* infinite loop */
#ifndef max
#define max(A, B)	((A) > (B) ? (A) : (B))
#endif
#define dprint(expr) printf("log: " #expr, expr)
#ifndef HDR
#define HDR "lower.h"
#endif
#define ABSDIFF(a, b) ((a) > (b) ? (a) - (b) : (b) - (a))
#define swap(t, x, y) {t tmp; tmp = x; x = y; y = tmp;}
