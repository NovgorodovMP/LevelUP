#ifndef FUNCTIONSFOR2DARRAYS_H
#define FUNCTIONSFOR2DARRAYS_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initialization();
int** createArray(size_t size);
void deleteArray(int** array);

void fillArray(int** array, size_t size);
void printArray(int** array, size_t size);

#endif // FUNCTIONSFOR2DARRAYS_H
