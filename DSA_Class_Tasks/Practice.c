#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
    int id;
    char title[30];
    float price;
}Book;

int main() 
{
    Book *b;
    int n;
    printf("Enter number of books : ");
    if(scanf("%d",&n) != 1 || n < 1) 
    {
        printf("Invalid Input\n");
        return -1;
    }

    b = malloc(n * sizeof(Book));
    if(b == NULL) 
    {
        printf("Memory not allocate\n");
        return -2;
    }

    for(int i=0;i<n;i++)
    {
        printf("Enter id of book %d : ",i + 1);
        scanf("%d",&(b + i)->id);
        printf("Enter title of book %d : ",i + 1);
        scanf(" %29[^\n]",(b + i)->title);
        printf("Enter price of book %d : ",i + 1);
        scanf("%f",&(b + i)->price);
    }

    int max = 0;
    for(int i=1;i<n;i++)
    {
        if((b + i)->price > (b + max)->price)
        {
            max = i;
        }
    }

    printf("Most expensive book is %d\n",1 + max);
    printf("Enter id of book %d : ",max + 1);
    printf("%d\n",(b + max)->id);
    printf("Enter title of book %d : ",max + 1);
    printf("%s\n",(b + max)->title);
    printf("Enter price of book %d : ",max + 1);
    printf("%.2f\n",(b + max)->price);
    
    free(b);

    return 0;

}