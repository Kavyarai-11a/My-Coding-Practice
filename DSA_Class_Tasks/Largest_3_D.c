#include<stdio.h>
#include<stdlib.h>
int main()
{
    int lays,rows,cols;
    printf("Enter sizes of array\n");
    printf("Enter layers of array : ");
    scanf("%d",&lays);
    printf("Enter rows of array : ");
    scanf("%d",&rows);
    printf("Enter columns of array : ");
    scanf("%d",&cols);
    int ***arr = malloc(lays * sizeof(int **));

    for(int i=0;i<lays;i++)
    {
        arr[i] = malloc(rows * sizeof(int *));
    }

    for(int i=0;i<lays;i++)
    {
        for(int j=0;j<rows;j++)
        {
            arr[i][j] = malloc(cols * sizeof(int));
        }
    }

    