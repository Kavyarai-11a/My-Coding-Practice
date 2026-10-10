#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
}Node;

Node *createNode(int data)
{
    Node *newNode = malloc(sizeof(Node));
    if(newNode == NULL)
    {
        return NULL;
    }

    newNode->data = data;
    newNode->link = NULL;

    return newNode;
}

int push(Node **head,int data)
{
    if(head == NULL)
    {
        return -1;
    }

    Node *newNode = createNode(data);
    if(newNode == NULL)
    {
        return -2;
    }

    if(*head == NULL)
    {
        *head = newNode->link;
    }

    else
    {
        newNode->link = *head;
        *head = newNode;
    }

    return 0;
}