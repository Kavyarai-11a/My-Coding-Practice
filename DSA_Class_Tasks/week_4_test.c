#include<stdio.h>
#include<stdlib.h>
typedef struct {
    int id;
    char title[30];
    float price;
}Book;

void readB(Book *B,int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",& (B + i)->id);
        scanf("%s",& (B + i)->title);
        scanf("%f",& (B + i)->price);
    }
}

int mostExp(Book *B,int n)
{
    int temp = 0;
    for(int i=0;i<n;i++)
    {
        if((B + i)->price > (B + temp)->price)
        {
            temp = i;
        }
    }
    return temp;
}

int main()
{
    int n;
    printf("Enter num of books to store : ");
    if(scanf("%d",&n) != 1 || n < 1)
    {
        printf("Invalid size\n");
        return 0;
    }
    Book *B = malloc(n*sizeof(Book));
    if(B == NULL)
    {
        printf("Memory not allocated\n");
        return 0;
    }
    readB(B,n);
    int result = mostExp(B,n);
    
    printf("Most expensive book details\n");
    printf("ID : %d\n",B->id);
    printf("Title : %s\n",B->title);
    printf("Price : %.2f\n",B->price);

    return 0;

}