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

int deleteEnd(List *l)
{
    if(l == NULL)
    {
        return -3;
    }

    if(l->head == NULL)
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
    while(temp->link->link != NULL)
    {
        temp = temp->link;
    }

    temp->link = NULL;
    free(l->tail);
    l->tail = temp;
    l->count--;

    return 0;
}

int deletePos(List *l,int Pos)
{
    if(Pos < 1)
    {
        return -2;
    }

    if(l == NULL)
    {
        return -3;
    }

    if(l->head == NULL)
    {
        return -4;
    }

    if(Pos == 1)
    {
        Node *temp = l->head;
        l->head = l->head->link;
        free(temp);
        l->count--;

        return 0;
    }

    Node *temp = l->head;
    Node *prev = l->head;
    for(int i=1;i<Pos;i++)
    {
        if(temp == NULL)
        {
            return -2;
        }
        prev = temp;
        temp = temp->link;

        if(temp->link == NULL)
        {
            prev->link = temp->link;
            l->tail = temp;
            free(temp);
            l->count--;
            return 0;
        }
    }

    prev->link = temp->link;
    free(temp);
    l->count--;

    return 0;
}

Node *deleteKey(List *l,int key)
{
    if(l == NULL)
    {
        return -3;
    }

    if(l->head)
    {
        return -4;
    }

    Node *temp = l->head;
    if(l->head->link)
    {
        free(l->head);
        l->head = NULL;
        free(l->tail);
        l->tail = NULL;
        l->count--;
        
    }

    Node *prev = l->head;
    while(temp != NULL)
    {
        if(temp->data == key && temp->link == NULL)
        {
            prev->link = temp->link;
            l->tail = prev;
            free(temp);
            l->count--;
            return 0;
        }
        else if(temp->data == key)
        {
            prev->link = temp->link;
            free(temp);
            l->count--;
            return 0;
        }
        temp = prev;
        temp = temp->link;
    }

    return -5;
}

int deleteList(List *l)
{
    if(l == NULL)
    {
        return -3;
    }

    if(l->head)
    {
        return -4;
    }

    Node *temp = l->head;
    while(l->head != l->tail)
    {
        l->head = l->head->link;
        free(temp);
        l->count--;
    }
    free(l->head);
    l->head = NULL;
    free(l->tail);
    l->tail = NULL;
    l->count = 0;

    return 0;

}

int ConcatList(List *l1,List *l2)
{
    if(l1 == NULL || l2 == NULL)
    {
        return -3;
    }

    if(l1->head == NULL && l1->tail == NULL)
    {
        l1->head = l2->head;
        l1->tail = l2->tail;
        l1->count = l2->count;
        free(l2->head);
        free(l2->tail);
        l2->count = 0;
        return 0;
    }

    if(l2->head == NULL && l2->tail == NULL)
    {
        return 0;
    }

    l1->tail->link = l2->head;
    l1->tail = l2->tail;
    l1->count += l2->count;
    free(l2->head);
    free(l2->tail);
    l2->count = 0;

    return 0;
    
}

int reverse(List *l)
{
    if(l == NULL)
    {
        return -3;
    }

    if(l->head == NULL)
    {
        return -4;
    }

    Node *prev = NULL;
    Node *curr = *head;
    Node *next;

}
