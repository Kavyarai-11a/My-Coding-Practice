
#include <stdio.h>
#define MAX 10

int top = -1;
int stack[MAX];

int push(int x)
{
    if (isFull())
    {
        return -1;
    }

    top++;
    stack[top] = x;
    return 0;
}

int pop()
{
    if (isEmpty())
    {
        return -2;
    }

    int value = stack[top];
    top--;
    return value;
}

int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }

    return 0;
}

int isFull()
{
    if (top == MAX - 1)
    {
        return 1;
    }

    return 0;
}

int peek()
{
    if (isEmpty())
    {
        return -2;
    }

    return stack[top];
}

int main()
{
    int c;

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

        switch (c)
        {
            case 1:
                printf("Enter an integer: ");

                if (scanf("%d", &x) != 1)
                {
                    printf("Invalid input\n");
                    return 1;
                }

                val = push(x);

                if (val == -1)
                {
                    printf("Overflow\n");
                }
                else
                {
                    printf("Successfully pushed\n");
                }
                break;

            case 2:
                val = pop();

                if (val == -2 && isEmpty())
                {
                    printf("Underflow\n");
                }
                else
                {
                    printf("%d is removed\n", val);
                }
                break;

            case 3:
                if (isEmpty())
                {
                    printf("Stack is empty\n");
                }
                else
                {
                    val = peek();
                    printf("%d is on top\n", val);
                }
                break;

            case 4:
                printf("Exit\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (c != 4);

    return 0;
}
