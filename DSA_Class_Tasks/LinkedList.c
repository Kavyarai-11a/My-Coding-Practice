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

//deleting a position in linked list
int deletePosition(Node **head,int pos) {
    if(pos < 1) {
        return -2;
    }

    if(pos == 1) {
        Node *temp = *head;

        if(temp == NULL) {
            return -1;
        }

        *head = temp->link;
        free(temp);
        return 0;
    }

    Node *prev = *head;
    for(int i=1;i<pos-1;i++) {
        if(prev->link == NULL) {
            return -2;
        }

        prev = prev->link;
    }

    if(prev->link == NULL) {
        return -2;
    }

    Node *temp = prev->link;
    prev->link = temp->link;
    free(temp);
    return 0;
}

//displaing head 

void display (Node * head) {
    Node * temp = head;
    while(temp != NULL) {
        printf("%d",temp->link);
        temp = temp->link;
    }
}