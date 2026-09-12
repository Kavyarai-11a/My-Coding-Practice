#include<stdio.h>
#include <stdlib.h>
int main()
{
    int rows,columns;
    printf("Enter size of array\n");
    printf("Enter rows of array : ");
    scanf("%d",&rows);
    printf("Enter columns of array : ");
    scanf("%d",&columns);

    int **arr = malloc(rows * sizeof(int *));
    for(int i=0;i<rows;i++)
    {
        arr[i] = malloc(columns * sizeof(int));
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<rows;i++)
    {
        free(arr[i]);
    }

    free(arr);
    return 0;

}