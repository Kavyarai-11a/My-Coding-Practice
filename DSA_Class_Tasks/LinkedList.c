#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int data;
    int *link;
}Node;

//Creating a new node
Node * Createnode(int data) {

    Node * newNode = (Node *)malloc(sizeof(Node));
    if(newNode == NULL) {
        return NULL;
    }

    newNode->data = data;
    newNode->link = NULL;

    return newNode;
}