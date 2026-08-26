//Swap the elements with temprory variable using pointers
#include<stdio.h>
void swapNum(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10, b = 20;
    int *p = &a, *q = &b;
    swapNum(p,q);
    printf("a = %d\nb = %d",a,b);
    return 0;

}