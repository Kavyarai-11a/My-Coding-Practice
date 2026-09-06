#include <stdio.h>

#include <stdlib.h>

 

/* Function Prototypes */

int *allocateScores(int n);

int *resizeScores(int *arr, int newSize);

void readScores(int *arr, int start, int end);

void printScores(int *arr, int n);

float calculateAverage(int *arr, int n);

int findMax(int *arr, int n);

int findMin(int *arr, int n);

int countAboveAverage(int *arr, int n, float average);

void freeMemory(int *arr);

 

