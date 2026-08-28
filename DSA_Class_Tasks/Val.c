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

    int type;
    printf("Select one type (0/1)\n");
    printf("0 for integer\n");
    printf("1 for float\n");
    printf("Enter a type : ");
    scanf("%d",&type);

    if(type == 0) {
        int val;
        printf("Enter a integer value : ");
        scanf("%d",&val);
        printf("%p\n",&val);
        safePrint(&val,type);
    }

    else if(type == 1) {
        float val;
        printf("Enter a float value : ");
        scanf("%f",&val);
        printf("%p\n",&val);
        safePrint(&val,type);
    }

    else {
        printf("Invalid Input\n");
    }

    printf("NULL pointer demonestration\n");
    safePrint(NULL,type);

    free(arrI);
    free(arrF);
    return 0;
}
