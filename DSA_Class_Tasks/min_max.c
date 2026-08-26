#include<stdio.h>
#include<stdlib.h>
void min_max(int arr[],int n,int *min,int *max) {
    for(int i=1;i<n;i++) {
        if(arr[i] > arr[*max]) {
            *max = i;
        }
    }

    for(int i=1;i<n;i++) {
        if(arr[i] < arr[*min]) {
            *min = i;
        }
    }
}

int main() {
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int* arr = malloc(n * sizeof(int));
    int min = 0,max = 0;
    for(int i=0;i<n;i++) {
        printf("Enter element at index %d : ", i);
        scanf("%d",(arr + i));
    }
    min_max(arr,n,&min,&max);
    printf("Largest element in array : %d\n",arr[max]);
    printf("Smallest element in array : %d",arr[min]);
    return 0;
}