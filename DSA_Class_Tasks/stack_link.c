#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
}Node;

Node *createNode(int data)
{
    Node *newNode = malloc(sizeof(Node));
    if(newNode == NULL)
    {
        return NULL;
    }

    newNode->data = data;
    newNode->link = NULL;

    return newNode;
}

int push(Node **head,int data)
{
    if(head == NULL)
    {
        return -1;
    }

    Node *newNode = createNode(data);
    if(newNode == NULL)
    {
        return -2;
    }

    if(*head == NULL)
    {
        *head = newNode->link;
    }

    else
    {
        newNode->link = *head;
        *head = newNode;
    }

    return 0;
}

int pop(Node **head)
{
    if(head == NULL)
    {
        return -1;
    }

    if(*head == NULL)
    {
        return -3;
    }
    
    Node *temp;
    if((*head)->link == NULL)
    {
        free(*head);
    }

    else{
        temp = *head;
        *head = temp->link;
        free(temp);
    }

    return 0;
}

int isEmpty(Node *head){
    if(head == NULL)
    {
        return -2;
    }

    return 0;
}

Node * peek(Node *head)
{
    if(isEmpty(head))
    {
        return NULL;
    }

    return head;
}

int main()
{
    int c;
    Node *head;

    do
    {
        printf("\nMenu\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &c) != 1)
        {
            printf("Invalid input\n");
            return 1;
        }

        int x, val;
        Node *a;
        switch(c)
        {
            case 1:
                printf("Enter an integer: ");

                if (scanf("%d", &x) != 1)
                {
                    printf("Invalid input\n");
                    return 1;
                }

                val = push(&head,x);
                if (val == 0)
                {
                    printf("Successfully pushed\n");
                }

                else
                {
                    pirntf("Enable to push\n");
                }
                break;
            case 2:
                val = pop(&head);

                if (val == -1 && isEmpty(head))
                {
                    printf("Enable to pop\n");
                }
                else
                {
                    printf("pop successfully\n");
                }
                break;
            if (isEmpty(head))
                {
                    printf("Stack is empty\n");
                }
                else
                {
                    a = peek(head);
                    printf("%d is on top\n", a->data);
                }
                break;
            case 4:
                printf("Exit\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }while(c != 4);
    return 0;
}