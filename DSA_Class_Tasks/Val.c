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

    printf("Enter 10 integer val\n");
    for(int i=0;i<10;i++) {
        scanf("%d",arrI + i);
    }

    printf("Enter 10 float val\n");
    for(int i=0;i<10;i++) {
        scanf("%f",arrF + i);
    }

    printf("Element with address\n");
    for(int i=0;i<10;i++) {
        printf("%d\n",*(arrI + i));
        printf("%p\n",arrI + i);
    }

    printf("Element with address\n");
    for(int i=0;i<10;i++) {
        printf("%.2f\n",*(arrF + i));
        printf("%p\n",arrF + i);
    }

    