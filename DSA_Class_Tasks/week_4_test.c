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