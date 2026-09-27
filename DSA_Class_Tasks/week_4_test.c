#include<stdio.h>
#include<stdlib.h>
typedef struct {
    char name[20];
    int year;
} Publisher;

typedef struct {
    int id;
    char title[30];
    float price;
    Publisher pub;
} Book;

void printAllBooks(Book *b,int n)
{
    for(int i=0;i<n;i++)
    {

        printf("%d\n",(b + i)->id);
        printf("%s\n",(b + i)->title);
        printf("%.2f\n",(b + i)->price);
        printf("%s\n",(b + i)->pub.name);
        printf("%d\n",(b + i)->pub.year);

    }
} 

Book *findMaxBook(Book *b,int n)
{
    int temp = 0;
    for(int i=0;i<n;i++)
    {
        if((b + i)->price > (b + temp)->price)
        {
            temp = i;
        }
    }

    return (b + temp);

}

Book *findMinBook(Book *b,int n)
{
    int temp = 0;
    for(int i=0;i<n;i++)
    {
        if((b + i)->price < (b + temp)->price)
        {
            temp = i;
        }
    }

    return (b + temp);
    
}

int main()
{
    int n;
    printf("Enter num of book's details to store\n");
    if(scanf("%d",&n) != 1 || n < 1)
    {
        printf("Invalid Input\n");
        return 0;
    }

    Book *b;
    b = malloc(n * sizeof(Book));
    if(b == NULL)
    {
        printf("Memory not allocated\n");
        return 0;
    }

    printAllBooks(b,n);
    Book *r1 = findMaxBook(b,n);
    printf("Most expensive books details\n");
    printf("%d\n",r1->id);
    printf("%s\n",r1->title);
    printf("%.2f\n",r1->price);
    printf("%s\n",r1->pub.name);
    printf("%d\n",r1->pub.year);

    Book *r2 = findMinBook(b,n);
    printf("Cheapest books details\n");
    printf("%d\n",r2->id);
    printf("%s\n",r2->title);
    printf("%.2f\n",r2->price);
    printf("%s\n",r2->pub.name);
    printf("%d\n",r2->pub.year);

    free(b);
    free(r1);
    free(r2);

    return 0;
}