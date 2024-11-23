#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    printf("%d\n", a[0]);

    int b[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", &b[i]);
    }

    return 0;
}