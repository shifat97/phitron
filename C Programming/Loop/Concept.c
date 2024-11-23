#include <stdio.h>
int main()
{

    for (int i = 0; i < 10; ++i)
    {
        printf("Hello, Programmers\n");
    }

    for (int i = 0; i < 10; ++i)
    {
        printf("%d ", i + 1);
    }

    printf("\n");

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            printf("%d ", j + 1);
        }
        printf("\n");
    }

    return 0;
}