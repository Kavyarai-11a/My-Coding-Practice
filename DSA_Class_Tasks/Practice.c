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
    for(int i=1;i<pos-1;i++)    //it is pos - 1 bcz it starts from one 1 and while i=1 in that case pos become 2
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

int reverseList(Node **head)
{
    if(head == NULL)
    {
        return -3;
    }

    if(*head == NULL)
    {
        return -4;
    }

    Node *prev = NULL;
    Node *curr = *head;
    Node *next;

    while(curr != NULL)
    {
        next = curr->link;
        curr->link = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
    return 0;
}

int traverList(Node **head1,Node **head2)
{
    if(head1 == NULL || head2 == NULL)
    {
        return -3;
    }
    
    if(*head1 == NULL && *head2 == NULL)
    {
        return -4;
    }

    if(*head1 == NULL)
    {
        *head1 = *head2;
        *head2 = NULL;
        return 0;
    }

    if(*head2 == NULL)
    {
        return 0;
    }

    Node *temp = *head1;
    while((temp)->link != NULL)
    {
        temp = temp->link;
    }

    temp->link = *head2;
    *head2 = NULL;
    return 0;
}

int search(Node)

