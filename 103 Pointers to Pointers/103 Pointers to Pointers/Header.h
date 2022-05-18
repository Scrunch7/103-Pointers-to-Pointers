#pragma once
#include <iostream>



int var = 5;



int valsA[5] = { 1, 2, 3, 4, 5 };
int valsB[5] = { 6, 7, 8, 9, 10 };
int valsC[5] = { 11, 12, 13, 14, 15 };


int* valPtr[3] = { &valsA[0], &valsB[0], &valsC[0] };
