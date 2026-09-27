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
