#include <stdio.h>
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i > 2)
        {
            continue;
        }
        printf("hi ");
    }

    printf("\n");

    for (int i = 0; i <= 10; i++)
    {
        if (i > 2)
        {
            break;
        }
        printf("hi ");
    }
}