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

//pushing node from wnd in linked list from scrach
int insertEnd(Node **head,int data) {
    Node * newNode = Createnode(data);
    if(newNode == NULL) {
        return -1;
    }

    if(*head == NULL) {
        *head = newNode;
    }

    Node * temp;
    temp = *head;
    while(temp->link != NULL) {
        temp = temp->link;
    }
    temp->link = newNode;

    return 0;
}

//inserting a node in linked list at any position
int insertPosition(Node ** head,int data,int pos) {
    if(pos < 1) {
        return -2;
    }

    Node * newNode = Createnode(data);
    if(newNode == NULL) {
        return -1;
    }

    if(pos == 1) {
        newNode->link = *head;
        *head = newNode;
    }
    
    Node *temp = *head;
    for(int i=1;i<pos-1;i++) {
        if(temp == NULL) {
            free(newNode);
            return -1;
        }

        temp = temp->link;
    }
    if(temp == NULL) {
        free(newNode);
        return -1;
    }

    newNode->link = temp->link;
    temp->link = newNode;
    
}