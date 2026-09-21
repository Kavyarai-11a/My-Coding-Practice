#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
}Node;

typedef struct
{
    Node *head;
    Node *tail;
    int count;
}List;

Node *createNode(int data)
{
    Node *newNode = malloc(sizeof(Node));
    if(newNode == NULL)
    {
        return -1;
    }

    newNode->data = data;
    newNode->link = NULL;
}