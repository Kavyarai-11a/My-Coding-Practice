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

    return newNode;
}

List *createList(void)
{
    List *newList = malloc(sizeof(List));
    if(newList == NULL)
    {
        return -3;
    }

    newList->head = NULL;
    newList->tail = NULL;
    newList->count = 0;

    return newList;
}

int InsertFront(List *l, int data)
{
    if(l == NULL)
    {
        return -3;
    }

    Node *newNode = createNode(data);

    if(newNode == NULL)
    {
        return -1;
    }

    newNode->link = l->head;
    l->head = newNode;

    if(l->tail == NULL)
    {
        l->tail = newNode;
    }

    l->count++;

    return 0;
}

int InsertEnd(List *l, int data)
{
    if(l == NULL)
    {
        return -3;
    }

    Node *newNode = createNode(data);

    if(newNode == NULL)
    {
        return -1;
    }

    if(l->head == NULL)
    {
        l->head = newNode;
        l->tail = newNode;
    }
    else
    {
        l->tail->link = newNode;
        l->tail = newNode;
    }

    l->count++;

    return 0;
}

int insertPos(List *l,int data,int Pos)
{
    if(l == NULL)
    {
        return -3;
    }

    if(Pos < 1 || Pos > l->count + 1)
    {
        return -2;
    }

    if(Pos == 1)
    {
        return insertFront(l,data);
    }

    if(Pos == l->count + 1)
    {
        return insertEnd(l,data);
    }
    
    Node *newNode = malloc(sizeof(Node));
    if(newNode == NULL)
    {
        return -1;
    }

    Node *temp = l->head;
    for(int i=1;i<Pos-1;i++)
    {
        temp = temp->link;
    }

    newNode = temp->link;
    temp->link = newNode;

    l->count++;

    return 0;

}

