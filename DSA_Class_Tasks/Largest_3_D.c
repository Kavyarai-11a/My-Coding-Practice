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

    printf("Enter %d elements\n",lays * rows * cols );
    for(int i=0;i<lays;i++)
    {
        for(int j=0;j<rows;j++)
        {
            for(int k=0;k<cols;k++)
            {
                scanf("%d",&arr[i][j][k]);
            }
        }
    }

    int temp1 = 0,temp2 = 0,temp3 = 0;
    for(int i=0;i<lays;i++)
    {
        for(int j=0;j<rows;j++)
        {
            for(int k=1;k<cols;k++)
            {
                if(arr[i][j][k] > arr[temp1][temp2][temp3])
                {
                    temp1 = i;
                    temp2 = j;
                    temp3 = k;
                }
            }
        }
    }

    
    
    