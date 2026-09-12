#include<stdio.h>
#include<stdlib.h>
int main()
{
    int layers,rows,columns;
    printf("Enter size of array\n");
    printf("Enter numbers of layers :" );
    scanf("%d",&layers);
    printf("Enter numbers of  rows : ");
    scanf("%d",&rows);
    printf("Enter numbers of columns : ");
    scanf("%d",&columns);

    int ***arr = malloc(layers * sizeof(int **));

    for(int i=0;i<layers;i++)
    {
        arr[i] = malloc(rows * sizeof(int *));
    }

    for(int i=0;i<layers;i++)
    {
        for(int j=0;j<rows;j++)
        {
            arr[i][j] = malloc(columns * sizeof(int));
        }
    }

    for(int i=0;i<layers;i++)
    {
        for(int j=0;j<rows;j++)
        {
            for(int k=0;k<columns;k++)
            {
                scanf("%d",&arr[i][j][k]);
            }
        }
    }

    for(int i=0;i<layers;i++)
    {
        for(int j=0;j<rows;j++)
        {
            for(int k=0;k<columns;k++)
            {
                printf("%d ",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    for(int i=0;i<layers;i++)
    {
        for(int j=0;j<rows;j++)
        {
                free(arr[i][j]);
        }
        free(arr[i]);
    }
    free(arr);
    return 0;
}