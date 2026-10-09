#include<stdio.h>
#define MAX 10

int top = -1;
int stack[MAX];

int push(int x)
{
    if(top == MAX - 1)
    {
        return -1;
    }

    top++;
    stack[top] = x;
    return 0;
    
}

int pop()
{
    if(top == -1)
    {
        return -2;
    }

    int value = stack[top];
    top--;
    return value;
}

int peek()
{
    if(top == -1)
    {
        return -2;
    }

    int val = stack[top];
    return val;
}

int isEmpty()
{
    if(top == -1)
    {
        return 1;
    }

    return 0;
}

int isFull()
{
    if(top == MAX - 1)
    {
        return 1;
    }
    
    return 0;
}

int main()
{
    int c;
    do
    {
        printf("Menu\n1.push\n2.pop\n3.peek\n4.Exit\n");
    } while (c == 4);
    printf("Enter your choice : ");
    if(scanf("%d",&c) != 1)
    {
        pritnf("scanf fail\n");
    }

    switch(c)
    {
        case 1:
        int x;
        printf("Enter a integer : ");
        if(scanf("%d",&x))
        {
            pirntf("scanf fail\n");
        }

        int val = push(x);

        if(val == -1)
        {
            printf("Overflow\n");
        }

        case 2:
        int val = pop();

        if(val == -2)
        {
            printf("Underflow\n");
        }
    }
}