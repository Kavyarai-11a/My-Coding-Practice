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

int InsertFront(List *l,int data)
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
        l->count++;
        return 0;
    }

    newNode->link = l->head;
    l->head = newNode;

    l->count++;

    return 0;
}

int InsertEnd(List *l,int data)
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
        l->count++;
        return 0;
    }

    Node *temp = l->tail;
    temp->link = newNode;
    l->tail = newNode;
    l->count++;

    return 0;
}

int InsertPos(List *l,int data,int Pos)
{
    if(Pos < 1)
    {
        return -2;
    }

    if(l == NULL)
    {
        return -3;
    }

    Node *newNode = createNode(data);
    if(newNode == NULL)
    {
        return -1;
    }

    if(Pos == 1)
    {
        newNode->link = l->head;
        l->head = newNode;
        l->count++;
        return 0;
    }

    Node *temp = l->head;
    for(int i=1;i<Pos-1;i++)
    {
        if(temp == NULL)
        {
            return 2;
        }
        temp = temp->link;
    }

    if(temp == NULL)
    {
        return -2;
    }

    newNode->link = temp->link;
    temp->link = newNode;
    l->count++;

    return 0;

}

int deleteFront(List *l)
{
    if(l == NULL)
    {
        return -3;
    }

    if(l->head)
    {
        return -4;
    }

    if(l->head->link == NULL)
    {
        free(l->head);
        free(l->tail);
        l->head = NULL;
        l->count--;
        return 0;
    }

    Node *temp = l->head;
    l->head = l->head->link;
    free(temp);
    l->count--;

    return 0;
}

