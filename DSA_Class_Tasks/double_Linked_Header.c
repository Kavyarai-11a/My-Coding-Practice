
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
} Node;

// Create a new node
Node* createNode(int value) {
    Node *nN =  (Node *)malloc(sizeof(Node));
    if(nN == NULL){
        return NULL;
    }

    nN->data = value;
    nN->prev = NULL;
    nN->next = NULL;

    return nN;
}

// Insert at front
void insertFront(Node *header, Node **tail, int value) {
    if(header == NULL){
        return;
    }
    if(tail == NULL){
        return;
    }
    Node *nN = createNode(value);
    if(nN == NULL){
        return;
    }
    if(*tail == NULL){
        header->next = nN;
        *tail = nN;
    }
    else
    {
        nN->next = header->next;
        header->next = nN;
        nN->next->prev = nN;
    }
    nN->prev = header;

}
// Insert at end
void insertEnd(Node *header, Node **tail, int value) {

}

// Insert at a given position
void insertPosition(Node *header, Node **tail, int value, int pos) {

}

// Delete front node
void deleteFront(Node *header, Node **tail) {

}

// Delete end node
void deleteEnd(Node *header, Node **tail) {

}

// Delete node at a given position
void deletePosition(Node *header, Node **tail, int pos) {

}

// Delete node by key
void deleteKey(Node *header, Node **tail, int key) {

}

// Delete entire list
void deleteList(Node *header, Node **tail) {

}

// Reverse the list
void reverseList(Node *header, Node **tail) {

}

// Traverse the list
void traverse(Node *header) {

}

// Search for a key
int search(Node *header, int key) {

}

// Concatenate two lists
void concatenate(Node *header1, Node **tail1, Node *header2, Node **tail2) {

}

int main() {
    Node *header = createNode(-1);
    Node *tail = NULL;

    int choice, value, pos, key;

    return 0;
}
