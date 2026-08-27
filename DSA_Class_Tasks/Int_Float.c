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

