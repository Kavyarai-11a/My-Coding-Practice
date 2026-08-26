//Pointer Arthimatic
//Addition of pointer
// #include<stdio.h>
// int main()
// {
//     int a[] = {10,20,30,40};
//     int *p = a;
//     int *p1 = &a[3];
//     printf("%d\n",*p);
//     printf("%d\n",*(p+3));
//     printf("%d\n",*p + *p1);
//     // int s = p + p1;
//     // printf("%d\n",s);
//     return 0;

// }

//Increment of pointer
// #include<stdio.h>
// int main()
// {
//     int a[] = {10,20,30,40};
//     int *p = a;
//     printf("%d\n",*p);
//     p++;
//     printf("%d\n",*p);
//     return 0;
// }

//Decrement of pointer
// #include<stdio.h>
// int main()
// {
//     int a[] = {10,20,30,40};
//     int *p = &a[3];
//     printf("%d\n",*p);
//     p--;
//     printf("%d\n",*p);
//     return 0;
// }

//Subraction of pointer
// #include<stdio.h>
// int main()
// {
//     int a[]={10,20,30,40,50};
//     int *p = &a[4];
//     int *q = &a[1];
//     printf("%d",(p-q));
//     return 0;
// }

//Comparision of pointer
#include<stdio.h>
int main()
{
    int a[] = {10,20,30,40,50};
    int *p = &a[1];
    int *q = &a[4];
    if(p>q)
    {
        printf("q is before p");
    }
    else
    printf("p is before q");
    return 0;
}