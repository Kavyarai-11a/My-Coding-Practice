#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int sequentialSearch (int* arr, int n, int target);
int main() {

    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    if(n < 1 || n > 100000) {
        printf("Invalid Input\n");
        return 1;
    }

    