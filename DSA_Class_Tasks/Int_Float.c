#include <stdio.h>

void safePrint(void *ptr, int type)
{
    if (ptr == NULL)
    {
        printf("NULL pointer\n");
        return;
    }

    if (type == 0)
    {
        printf("Address = %p, Value = %d\n", ptr, *(int *)ptr);
    }
    else if (type == 1)
    {
        printf("Address = %p, Value = %.2f\n", ptr, *(float *)ptr);
    }
}

int main()
{
    int arrI[10];
    int arrF[10];
    int type;

    printf("Enter 10 integers:\n");

        for (int i = 0; i < 10; i++)
        {
            scanf("%d", arrI + i);
        }

    printf("Enter 10 floating-point values:\n");

        for (int i = 0; i < 10; i++)
        {
            scanf("%f", arrF + i);
        }

    return 0;
}