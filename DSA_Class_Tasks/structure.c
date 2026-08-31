#include<stdio.h>
#include<stdlib.h>
typedef struct {
    int id;
    char title[30];
    float price;
} Book;

int main() {

    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    