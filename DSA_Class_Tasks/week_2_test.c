#include <stdio.h>

#include <stdlib.h>

 /* Function Prototypes */

int *allocateUsingMalloc(int n);

int *allocateUsingCalloc(int n);

int *resizeArray(int *arr, int newSize);

void readElements(int *arr, int start, int end);

void printArray(int *arr, int n);

void freeMemory(int *arr);

 int main()

{

    int n, new_n;
    printf("Enter size of array : ");
    if(scanf("%d",&n) != 1 || n < 1) {
        printf("Invalid Input");
        return -1;
    }

    int *mallocArray;
    mallocArray = allocateUsingMalloc(n);
    if(mallocArray == NULL) {
        printf("Memory not allocated\n");
        return 1;
    }
    printf("Enter %d elements\n",n);
    readElements(mallocArray,0,n);
    printf("Array Elements\n");
    printArray(mallocArray,n);

    int *callocArray;
    callocArray = allocateUsingCalloc(n);
    if(callocArray == NULL) {
        printf("Memory not allocated\n");
        free(mallocArray);
        return 1;
    }
    printf("Array elements before intialization\n");
    printArray(callocArray,n);
    printf("Enter %d elements\n",n);
    readElements(callocArray,0,n);
    printf("Array Elements\n");
    printArray(callocArray,n);

    printf("Enter new size of array : ");
    if(scanf("%d",&new_n) != 1 || new_n < 1) {
        printf("Invalid Input");
        free(mallocArray);
        free(callocArray);
        return -1;
    }
    int *resizedArray;
    resizedArray = resizeArray(mallocArray,new_n);
    if(resizedArray == NULL) {
        printf("Memory not allocated\n");
        free(mallocArray);
        free(callocArray);
        return 1;
    }
    mallocArray = resizedArray;
    if(new_n > n) {
        printf("Enter %d elements\n",new_n - n);
        readElements(mallocArray,n,new_n);
    }
    printf("Array Elements\n");
    printArray(mallocArray,new_n);

    freeMemory(mallocArray);
    freeMemory(callocArray);
     return 0;

}

 int *allocateUsingMalloc(int n)

{
    int *mallocArray = malloc(n * sizeof(int));
    if(mallocArray == NULL) {
        return NULL;
    }

    return mallocArray;

}

 int *allocateUsingCalloc(int n)

{
    int *callocArray = calloc(n , sizeof(int));
    if(callocArray == NULL) {
        return NULL;
    }

    return callocArray;
    

}

 int *resizeArray(int *arr, int newSize)

{
    int *reallocArray = realloc(arr, newSize * sizeof(int));
    if(reallocArray == NULL) {
        return NULL;
    }

    return reallocArray;


}

 void readElements(int *arr, int start, int end)

{
    for(int i=start;i<end;i++) {
        scanf("%d",(arr + i));
    }
}

 void printArray(int *arr, int n)

{
    for(int i=0;i<n;i++) {
        printf("%d ",*(arr + i));
    }
    printf("\n");
}

 void freeMemory(int *arr)

{
    free(arr);
}