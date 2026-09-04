#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int data;
    int * link;
}Node;
Node * createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if(newNode == NULL) {
        return NULL;
    }
    newNode->data = data;
    newNode->link = NULL;

    return newNode;
}

int insertFornt(Node **head,int data) {
    Node * newNode = createNode(data);
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

int insertEnd(Node **head,int data) {
    Node *newNode = createNode(data);
    if(newNode == NULL) {
        return -1;
    }
    if(*head == NULL) {
        *head = newNode;
    }

    else {
        Node *temp = *head;
        while(temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = newNode;
    }
    
    return 0;
}

int insertPos(Node **head,int data,int pos) {
    if(pos < 1) {
        return -2;
    }

    Node *newNode = createNode(data);
    if(newNode == NULL) {
        return -1;
    }

    if(pos == 1) {
        newNode->link = *head;
        *head = newNode;
    }

    Node * temp = *head;
    for(int i=0;i<pos-1;i++) {
        if(temp->link == NULL) {
            free(newNode);
            return -3;
        }
        temp = temp->link;
    }

    if(temp == NULL) {
            return -3;
        }
    
    newNode->link = temp->link;
    temp->link = newNode;

    return 0;
}