//Task one print the variable and pointers
#include<stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%u\n",&p);
    printf("%u\n",p);
    printf("%u\n",&a);
    return 0;

}