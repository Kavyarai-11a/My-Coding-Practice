//Swap the elements without temprory variable using pointers
// #include<stdio.h>
// void swapNum1(int a, int b)
// {
//     a = b;
//     printf("a = %d\n",a);
// }
// void swapNum2(int a, int b)
// {
//     b = a;
//     printf("b = %d",b);
// }
// int main()
// {
//     int a = 10;
//     int b = 20;
//     swapNum1(a,b);
//     swapNum2(a,b);
// }

//Correction
#include<stdio.h>
int main()
{
    int a = 10, b = 20;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d\nb = %d",a,b);
    return 0;
}
