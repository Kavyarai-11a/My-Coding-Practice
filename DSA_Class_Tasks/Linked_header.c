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
    Node *newNode = malloc(sizeof(int));
    if(newNode == NULL)
    {
        return -1;
    }

    newNode->data = data;
    newNode->link = NULL;

    return newNode;
}
List *createList(void)
{
    List *newList = malloc(sizeof(List));
    if(newList == NULL)
    {
        return NULL;
    }
    newList->head = NULL;
    newList->tail = NULL;
    newList->count = 0;

    return newList;
}

