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
