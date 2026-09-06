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

int main()

{

    int n, new_n;

    printf("Enter size of array : ");
    if(scanf("%d",&n) != 1 || n < 1) {
        printf("Invalid Input\n");
        return 1;
    } 

    int *scores = allocateScores(n);
    if(scores == NULL) {
        printf("Memory not allocated\n");
        return 1;
    }

    printf("Enter %d scores\n",n);
    readScores(scores,0,n);

    printf("Array elements\n");
    printScores(scores,n);

    float average;
    average =  calculateAverage(scores,n);

    findMax(scores,n);
    findMin(scores,n);
    countAboveAverage(scores,n,average);

    
    printf("Enter new size of array : ");
    if(scanf("%d",&new_n) != 1 || new_n < 1) {
        printf("Invalid Input\n");
        return 1;
    } 
    
    int *resized = resizeScores(scores,new_n);
    if(resized == NULL) {
        printf("Memory not allocated\n");
        free(scores);
        return 1;
    }

    if(new_n > n) {
        printf("Enter %d scores\n",new_n - n);
        readScores(resized,n,new_n);
    }

    scores = resized;
    printf("Array elements\n");
    printScores(scores,new_n);

    average =  calculateAverage(scores,new_n);

    findMax(scores,new_n);
    findMin(scores,new_n);
    countAboveAverage(scores,new_n,average);

    freeMemory(scores);

    return 0;

}

 

int *allocateScores(int n)

{
    int *scores = calloc(n,sizeof(int));
    if(scores == NULL) {
        return NULL;
    }

    return scores;
    
}

 int *resizeScores(int *arr, int newSize)

{
    int *resized = realloc(arr,newSize*sizeof(int));
    if(resized == NULL) {
         return NULL;
    }

    return resized;

}

 

void readScores(int *arr, int start, int end)

{
    for(int i=start;i<end;i++) {
        scanf("%d",(arr + i));
    }
}

 

void printScores(int *arr, int n)

{
    for(int i=0;i<n;i++) {
        printf("%d ",*(arr + i));
    }
    printf("\n");
}

 

float calculateAverage(int *arr, int n)

{
    float sum = 0;
    for(int i=0;i<n;i++) {
       sum += *(arr + i);
    }
    //printf("%f\n",sum);
    float avg = sum/n;
    printf("Average score = %.2f\n", avg);
    return avg;
    
}

 

int findMax(int *arr, int n)

{
    if(arr == NULL) {
        return 1;
    }
    int temp = 0;
    for(int i=1;i<n;i++) {
        if(*(arr + i) > *(arr + temp)) {
            temp = i;
        }
    }
    printf("Highest Score = %d\n",*(arr + temp));
    return 0;

}

 

