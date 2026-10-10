#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
}Node;

Node *createNode(int data)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node *newNode = malloc(sizeof(Node));
    if(newNode == NULL)
    {
        return NULL;
    }

    newNode->data = data;
    newNode->link = NULL;

    return newNode;
}

