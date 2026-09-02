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

//pushing node from front in linked list from scrach

int insertFront(Node **head,int data) {
    Node * newNode = Createnode(data);
    if(newNode == NULL) {
        return -1;
    }

    if(*head == NULL) {
        *head = newNode;
    }
    else {
        newNode->link = *head;
        *head = newNode;
    }

    return 0;
}