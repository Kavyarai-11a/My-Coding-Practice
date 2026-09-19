#include<stdio.h>
#include<stdio.h>

typedef struct node {
    int data;
    struct node link;
}Node;

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if(newNode == NULL)
    {
        return -1;
    }
    newNode->data = data;
    newNode->link = NULL;

    return newNode;
}

int insertFront(Node **head,int data)
{
    if(head == NULL)
    {
        return -3;
    }

    Node *newNode = createNode(data);
    if(newNode == NULL)
    {
        return -1;
    }

    if(*head == NULL)
    {
        *head = newNode;
        return 0;
    }

    newNode->link = *head;
    *head = newNode;

    return 0;
}

int insertEnd(Node ** head,int data)
{
    if(head == NULL)
    {
        return -3;
    }

    Node *newNode = createNode(data);
    if(newNode == NULL)
    {
        return -1;
    }

    if(*head == NULL)
    {
        *head = newNode;
        return 0;
    }

    Node *temp = *head;
    while(temp->link !=NULL)
    {
        temp = temp->link;
    }

    temp->link = newNode;

    return 0;

}

int insertPos(Node **head,int data,int pos)
{
    if(pos < 1)
    {
        return -2;
    }

    if(head == NULL)
    {
        return -3;
    }

    Node *newNode = createNode(data);
    if(newNode == NULL)
    {
        return -1;
    }

    if(pos == 1)
    {
        newNode->link = *head;
        *head = newNode;
        return 0;
    }

    Node *temp = *head;
    for(int i=1;i<pos-1;i++)
    {
        if(temp == NULL)
        {
            free(newNode);
            return -2;
        }

        temp = temp->link;
    }

    if(temp == NULL)
    {
        free(newNode);
        return -2;
    }

    newNode->link = temp->link;
    temp->link = newNode;

    return 0;
}

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

int deleteEnd(Node **head)
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

    Node *curr = *head;
    Node *pre =*head;
    while(curr->link != NULL)
    {
        pre = curr;
        curr = curr->link;
    }

    pre->link = NULL;
    free(curr);

    return 0;

}

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
        temp = *head;
        *head = (*head)->link;
        free(temp);
        return 0;
    }

    Node *curr = *head;
    Node *prev = *head;
    while(curr != NULL)
    {
        if(curr->data == key)
        {
            prev->link = curr->link;
            free(curr);
            return 0; 
        }
        prev = curr;
        curr = curr->link;
    }

    return -5;
}

int deletePos(Node **head,int Pos)
{
    if(Pos < 1)
    {
        return -2;
    }

    if(head == NULL)
    {
        return -3;
    }

    if(*head == NULL)
    {
        return -4;
    }

    Node *temp = *head;
    Node *prev = *head;
    if(Pos == 1)
    {
        temp = *head;
        *head = (*head)->link;
        free(temp);
        return 0;
    }

    for(int i=1;i<Pos;i++)
    {
        if(temp == NULL)
        {
            return -2;
        }
        prev = temp;
        temp = temp->link;
    }

    if(temp == NULL)
    {
        return -2;
    }

    prev->link = temp->link;
    free(temp);

    return 0;
}

int deleteList(Node **head)
{
    if(head == NULL)
    {
        return -3;
    }

    if(*head == NULL)
    {
        return -4;
    }

    Node *temp;
    while(*head != NULL)
    {
        temp = *head;
        *head = (*head)->link;
        free(temp);
    }

    return 0;
}