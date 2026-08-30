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

    int *arr = malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("Memory not allocate\n");
        return 1;
    }

    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++) {
        scanf("%d",(arr + i));
        if(*(arr + i) < -1000000000 ||*(arr + i) > 1000000000) {
            printf("Invalid Input\n");
            free(arr);
            return 1;
        }
    }

    int target;
    printf("Enter the element to be search\n");
    scanf("%d",&target);
    if(target < -1000000000 || target > 1000000000) {
        printf("Invalid Input\n");
        free(arr);
        return 1;
    }

    int result = sequentialSearch (arr,n,target);

    if(result == -1) {
        printf("Element is not in array\n");
    }
    else {
        printf("Element is at %d index\n",result);
    }

    free(arr);
    return 0;
}

