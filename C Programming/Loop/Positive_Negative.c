#include <stdio.h>
int main()
{

    for (int i = -10; i <= 10; i++)
    {
        if (i % 2 == 0)
            printf("Even = %d\n", i);
        else
            printf("Odd = %d\n", i);

        if (i < 0)
            printf("Negative = %d\n", i);
        else
            printf("Positive = %d\n", i);

        printf("\n");
    }

    return 0;
}