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

    Book * B;
    B = malloc(n * sizeof(Book));

    for(int i=0;i<n;i++) {
        printf("Enter id of book %d : ",i + 1);
        scanf("%d",&(B + i)->id);
        printf("Enter title of book %d : ",i + 1);
        scanf("%s",(B + i)->title);
        printf("Enter price of %d book : ",i + 1);
        scanf("%f",&(B + i)->price);
    }

    