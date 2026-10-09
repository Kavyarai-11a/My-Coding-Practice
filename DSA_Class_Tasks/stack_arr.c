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

