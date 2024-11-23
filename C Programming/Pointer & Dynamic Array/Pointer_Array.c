#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int *p = arr;

    printf("%d %d\n", &arr[0], p);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", &p[i]);
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }

    return 0;
}