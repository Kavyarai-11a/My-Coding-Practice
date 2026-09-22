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
    
    Node *newNode = createNode(data);
    if(newNode == NULL)
    {
        return -1;
    }

    Node *temp = l->head;
    for(int i=1;i<Pos-1;i++)
    {
        temp = temp->link;
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

    if(l->count == 0)
    {
        return -4;
    }

    Node *temp = l->head;
    l->head = l->head->link;

    if(l->head == NULL)
        l->tail = NULL;

    free(temp);
    
    l->count--;

    return 0;
}

int deleteEnd(List *l)
{
    if(l == NULL)
    {
        return -3;
    }

    if(l->count == 0)
    {
        return -4;
    }

    Node *temp = l->head;
    
    if(l->count == 1)
    {
        l->tail = l->tail->link;
        l->head = NULL;
        free(temp);
    }

    else
    {
        while(temp->link->link != NULL)
        {
            temp = temp->link;
        }

        temp->link = NULL;
        free(l->tail);
        l->tail = temp;
    }

    l->count--;

    return 0;

}

int deletePos(List *l,int Pos)
{
    if(l == NULL)
    {
        return -3;
    }

    if(l->count == 0)
    {
        return -4;
    }

    if(Pos < 1 || Pos > l->count)
    {
        return -2;
    }

    if(Pos == 1)
    {
        return deleteFront(l);
    }

    if(Pos == l->count)
    {
        return deleteEnd(l);
    }

    else
    {
        Node *temp = l->head;
        Node *prev = l->head;
        for(int i=1;i<Pos-1;i++)
        {
            prev = temp;
            temp = temp->link;
        }

        prev->link = temp->link;
        free(temp);
    }

    l->count--;

    return 0;

}

int deleteKey(List *l,int key)
{
    if(l == NULL)
    {
        return -3;
    }

    if(l->count == NULL)
    {
        return -4;
    }

    int count = 1;
    Node *temp = l->head;
    while(temp != NULL)
    {
        if(temp->data == key && temp == l->head)
        {
            return deleteFront(l);
        }

        else if(temp->data == key && temp == l->tail)
        {
            return deleteEnd(l);
        }

        else if(temp->data == key)
        {
            return deletePos(l,count);
        }

        temp = temp->link;
        count++;
    }

    return -1;
}