#include <stdio.h>
#include<stdlib.h>
typedef struct node {
    int data;
    int link;
}Node;

//Create new node 
Node *createnewNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if(newNode == NULL)
    {
        return NULL;
    }

    newNode->data = data;
    newNode->link = NULL;

    return newNode;
}
//inserting a value from front in a linked list
int insetFront(Node ** head,int data)
{
    Node *newNode = createnewNode(data);
    if(newNode = NULL)
    {
        return -1;
    }

    if(*head == NULL)
    {
        *head = newNode;
    }

    newNode->link = *head;
    *head = newNode;

    return 0;
}

//inserting a value from end in a linked list
int insertEnd(Node **head,int data)
{
    Node *newNode = createnewNode(data);
    if(newNode = NULL)
    {
        return -1;
    }

    if(*head == NULL)
    {
        *head = newNode;
    }

    Node *temp = *head;
    while(temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = newNode;
    return 0;
}

//inserting data at any position in linked list
int Posinsert(Node **head,int data,int Pos)
{
    if(Pos < 1)
    {
        return -2;
    }
    Node *newNode = createnewNode(data);
    if(newNode == NULL)
    {
        return -1;
    }

    if(Pos == 1)
    {
        newNode->link = *head;
        *head = newNode;
        return 0;
    }

    Node *temp = *head;
    for(int i=1;i<Pos-1;i++)
    {
        if(temp == NULL) 
        {
            free(newNode);
            return -1;
        }
        temp = temp->link;
    }
    if(temp == NULL) 
    {
        free(newNode);
        return -1;
    }
    newNode->link = temp->link;
    temp->link = newNode;
    return 0;

}

//deleting 1st element
int deleteFront(Node **head)
{
    if(head == NULL)
    {
        return -3;
    }
    if(*head == NULL)
    {
        return -4;
    }
    Node *temp = *head;
    *head = (*head)->link;
    free(temp);
    return 0;

}

//deleting last element
int deletelast(Node **head)
{
    if(head == NULL)
    {
        return -3;
    }
    if(*head == NULL)
    {
        return -4;
    }
    if((*head)->link == NULL)
    {
        free(*head);
        *head = NULL;
        return 0;
    }
    Node *temp = *head;
    Node *prev = *head;
    while(temp->link != NULL)
    {
        prev = temp;
        temp = temp->link;
    }
    prev->link =  NULL;
    free(temp);
    return 0;
}

//deleteing a key from list
int deleteKey(Node **head,int key)
{
    if(head == NULL)
    {
        return -3;
    }
    if(*head == NULL)
    {
        return -4;
    }
    Node *temp = *head;
    if((*head)->data == key)
    {
        *head = (*head)->link;
        free(temp);
        return 0;
    }
    Node *prev = *head;
    while(temp != NULL)
    {
        if(temp->data == key)
        {
            prev->link = temp->link;
            free(temp);
            return 0;
        }
        prev = temp;
        temp = temp->link;
    }
    return -1;
}
