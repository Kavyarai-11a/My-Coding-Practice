#include<stdio.h>
#include<stdlib.h>
void safePrint(void *ptr,int type);
int main() {
    
    int * arrI = malloc(10 * sizeof(int));
    if(arrI == NULL) {
        printf("Pointer not assigned\n");
        return 1;
    }

    float *arrF = malloc(10 * sizeof(float));
    if(arrF == NULL) {
        printf("Pointer not assigned\n");
        free(arrI);
        return 1;
    }

    