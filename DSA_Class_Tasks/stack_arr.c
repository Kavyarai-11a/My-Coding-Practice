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

int isEmpty()
{
    if(top == -1)
    {
        return -3;
    }

    return 0;
}

int peek()
{
    if(top == -1)
    {
       int a = isEmpty();
       return a;
    }

    int val = stack[top];
    return val;
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
    
    printf("Enter your choice : ");
    if(scanf("%d",&c) != 1)
    {
        printf("scanf fail\n");
        return 0;
    }

    int x;
    int val;
    if(c == 1)
    {
        printf("Enter a integer : ");
        if(scanf("%d",&x) != 1)
        {
            printf("scanf fail\n");
            return 0;
        }

    }

    switch(c)
    {
        case 1:
        val = push(x);

        if(val == -1)
        {
            printf("Overflow\n");
        }

        else
        printf("Succesfully pushed\n");
        break;

        case 2:
        val = pop();

        if(val == -2)
        {
            printf("Underflow\n");
        }

        else
        printf("%d  is removed\n",val);
        break;

        case 3:
        val = peek();

        if(val == -3)
        {
            printf("Stack is empty\n");
        }

        else
        printf("%d is on top\n",val);
        break;

        case 4:
        printf("Exit\n");
        return 0;
        break;

        default:
        printf("Ivalid input fill ur choice again\n");
    }
    } while (c != 4);
}