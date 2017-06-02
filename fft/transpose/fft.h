/*
Implementations based on:
V. Volkov and B. Kazian. Fitting fft onto the g80 architecture. 2008.
*/

#include <stdio.h>
/*#include <stdlib.h>
#include <math.h>
*/
#include "softfloat.c"


#define TYPE float64

/*
typedef struct complex_t {
        TYPE x;
        TYPE y;
} ;
*/
#define PI 0x400921fafc8b0079ULL
#ifndef M_SQRT1_2
#define M_SQRT1_2      0x3fe6a09e667f3bcdULL
#endif
void fft1D_512(TYPE work_x[512], TYPE work_y[512]);

////////////////////////////////////////////////////////////////////////////////
// Test harness interface code.
/*
struct bench_args_t {
        TYPE work_x[512];
        TYPE work_y[512];
};*/
