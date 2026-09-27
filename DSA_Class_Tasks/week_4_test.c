#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    int year;
} Publisher;

typedef struct {
    int id;
    char title[30];
    float price;
    Publisher pub;   // nested structure
} Book;

// Function to print details of all books
void printAllBooks(Book *books, int n) {
    // write logic here
    for(int i=0;i<n;i++)
    {
        printf("%d\n",(books + i)->id);
        printf("%s\n",(books + i)->title);
        printf("%.2f\n",(books + i)->price);
        printf("%s\n",(books + i)->pub.name);
        printf("%d\n",(books + i)->pub.year);
    }
}

// Function to find the book with maximum price
Book* findMaxBook(Book *books, int n) {
    // write logic here
    int temp;
    for(int i=0;i<n;i++)
    {
        if((books + i)->price > (books + temp)->price)
        {
            temp = i;
        }
    }

    return (books + temp);
}

// Function to find the book with minimum price
Book* findMinBook(Book *books, int n) {
    // write logic here
    int temp;
    for(int i=0;i<n;i++)
    {
        if((books + i)->price < (books + temp)->price)
        {
            temp = i;
        }
    }

    return (books + temp);
}

int main() {
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    // write logic here
    Book *books = (Book *)malloc(n * sizeof(Book));
    if(books == NULL)
    {
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        scanf("%d",&(books + i)->id);
        scanf("%29s",(books + i)->title);
        scanf("%f",&(books + i)->price);
        scanf("%19s",(books + i)->pub.name);
        scanf("%d",&(books + i)->pub.year);

        // write logic here
    }

    printAllBooks(books,n);

    Book * i1 = findMaxBook(books,n);
    Book * i2 = findMinBook(books,n);

    printf("%d\n",i1->id);
    printf("%s\n",i1->title);
    printf("%.2f\n",i1->price);
    printf("%s\n",i1->pub.name);
    printf("%d\n",i1->pub.year);

    printf("%d\n",i2->id);
    printf("%s\n",i2->title);
    printf("%.2f\n",i2->price);
    printf("%s\n",i2->pub.name);
    printf("%d\n",i2->pub.year);



    // write logic here
    free(books);
    return 0;
}