//=======================================
//    num_conversion.h
//    Andrew Chin    Nov 26, 2019
//=======================================

#ifndef NUM_CONVERSION_H
#define NUM_CONVERSION_H

#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

// convert input number |n| to base |out_base|
// result is stored in |result|
// return 0 on success, otherwise failure
int convert(char* n, char* result, int out_base);

// automatically detect base from |n| based on the following prefixes
// binary   0b111
// dec      111
// octal    0111
// hex      0x111
int detectBase(char* n);

// return int value of hex digit
// on error, return -1
int digitVal(char c);

#endif
