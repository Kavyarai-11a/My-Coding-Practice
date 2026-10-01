#include<stdio.h>
#include<stdlib.h>
void correct_function(int **p);
int main()
{
    int x = 10;
    int *p = &x;
    correct_function(&p);
    printf("%d\n",x);
    // int **q = &p;

    // printf("%d\n",x);
    // printf("%u\n",&x);
    // printf("%u\n",p);
    // printf("%u\n",&p);
    // printf("%u\n",q);
    // printf("%u\n",*q);
    // printf("%d\n",*p);
    // printf("%d\n",**q);

    return 0;
}
void correct_function(int **p1)
{
    int *new_p = malloc(sizeof(int));
    **p1= 50;
    *p1 = new_p;
}