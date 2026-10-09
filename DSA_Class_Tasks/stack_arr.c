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