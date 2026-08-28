#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    int *p;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    int * arr_1 = (int *)malloc(n*sizeof(int));
    if(arr_1 == NULL) {
    printf("Memory allocation failed");
    return 1;
    }
    p = arr_1;
    printf("Enter %d element\n",n);
    for(int i=0;i<n;i++) {
        scanf("%d",arr_1 + i);
    }

    printf("\nArray elements and address\n");
    for(int i=0;i<n;i++) {
        printf("%d\n",*(arr_1 + i));
        printf("%p\n",(arr_1 + i));
    }

    int * arr_2 = (int *)calloc(n,sizeof(int));
    if(arr_2 == NULL) {
    printf("Memory allocation failed");
    return 1;
    }

    printf("\nInitial Array\n");
    for(int i=0;i<n;i++) {
        printf("%d\n",*(arr_2 + i));
        printf("%p\n",(arr_2 + i));
    }

    for(int i=0;i<n;i++) {
        *(arr_2 + i) = *(arr_1 + i);
    }

    printf("\nArray elements and address\n");
    for(int i=0;i<n;i++) {
        printf("%d\n",*(arr_2 + i));
        printf("%p\n",(arr_2 + i));
    }

    int * temp;
    int m;
    printf("\nEnter the size of array greater than %d: ",n);
    scanf("%d",&m);
    if(m <= n) {
        printf("Invalid Input");
        free(arr_1);
        free(arr_2);
        return 1;
    }
        temp =(int *)realloc(arr_1,m*sizeof(int));
    
    
    if(temp == NULL) {
        printf("Reallocation failed");
        free(arr_1);
        free(arr_2);
        return 1;

    }
    arr_1 = temp;

    printf("\nEnter %d element\n",m-n);
    for(int i=n;i<m;i++) {
        scanf("%d",arr_1 + i);
    }

    printf("\nArray elements and address\n");
    for(int i=0;i<m;i++) {
        printf("%d\n",*(arr_1 + i));
        printf("%p\n",(arr_1 + i));
    }

    if(p == arr_1) {
        printf("Pointer does not changed");
    }
    else {
        printf("Pointer changed");
    }

    free(arr_1);
    arr_1 = NULL;
    free(arr_2);
    arr_2 = NULL;
    p = NULL;

    return 0;
}