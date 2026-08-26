//Dereferancing a pointer
// #include<stdio.h>
// int main()
// {
//     int a = 10;
//     int *p = &a;
//     int val1 = *p;
//     printf("%d\n",val1);
//     return 0;
// }

//Null Pointer
// #include<stdio.h>
// int main()
// {
//     int *p = NULL;
//     if(p != NULL)
//     printf("p is a not a null pointer");
//     else
//     printf("p is a null pointer");
//     return 0;
// }

//Generic Pointer
#include<stdio.h>
int main()
{
    int a = 10;
    float b = 10.3;
    void *p = &a;
    void *q = &b;
    printf("%d\n",*(int *)p);
    printf("%f",*(float *)q);
    return 0;
}