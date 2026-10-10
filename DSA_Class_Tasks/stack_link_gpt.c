
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

/* Creates a node */
static Node *createNode(int data)
{
    Node *newNode = malloc(sizeof *newNode);

    if (newNode == NULL)
        return NULL;

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

/* Returns 0 on success, -1 for invalid argument, -2 for allocation failure */
int push(Node **top, int data)
{
    if (top == NULL)
        return -1;

    Node *newNode = createNode(data);

    if (newNode == NULL)
        return -2;

    newNode->next = *top;
    *top = newNode;

    return 0;
}

/* Returns 0 on success, -1 for invalid argument, -2 for empty stack */
int pop(Node **top, int *removedValue)
{
    if (top == NULL || removedValue == NULL)
        return -1;

    if (*top == NULL)
        return -2;

    Node *temp = *top;
    *removedValue = temp->data;
    *top = temp->next;

    free(temp);
    return 0;
}

/* Returns 1 if empty, otherwise 0 */
int isEmpty(const Node *top)
{
    return top == NULL;
}

/* Returns a pointer to the top node, or NULL if empty */
const Node *peek(const Node *top)
{
    return top;
}

/* Prints the stack without modifying it */
void display(const Node *top)
{
    for (const Node *current = top;
         current != NULL;
         current = current->next)
    {
        printf("%d\n", current->data);
    }
}

/* Releases all nodes */
void destroyStack(Node **top)
{
    if (top == NULL)
        return;

    while (*top != NULL)
    {
        Node *temp = *top;
        *top = temp->next;
        free(temp);
    }
}

int main(void)
{
    Node *top = NULL;
    int choice;
    int value;
    int status;

    do
    {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input\n");
            destroyStack(&top);
            return EXIT_FAILURE;
        }

        switch (choice)
        {
            case 1:
                printf("Enter value: ");

                if (scanf("%d", &value) != 1)
                {
                    printf("Invalid input\n");
                    destroyStack(&top);
                    return EXIT_FAILURE;
                }

                status = push(&top, value);

                if (status == 0)
                    printf("Push successful\n");
                else if (status == -2)
                    printf("Memory allocation failed\n");
                else
                    printf("Invalid argument\n");

                break;

            case 2:
                status = pop(&top, &value);

                if (status == 0)
                    printf("Removed: %d\n", value);
                else if (status == -2)
                    printf("Stack is empty\n");
                else
                    printf("Invalid argument\n");

                break;

            case 3:
            {
                const Node *node = peek(top);

                if (node == NULL)
                    printf("Stack is empty\n");
                else
                    printf("Top: %d\n", node->data);

                break;
            }

            case 4:
                if (isEmpty(top))
                    printf("Stack is empty\n");
                else
                    display(top);

                break;

            case 5:
                printf("Exiting\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 5);

    destroyStack(&top);
    return EXIT_SUCCESS;
}
