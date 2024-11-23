#include <stdio.h>
int main()
{
    int a[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }

    printf("%d\n", sum);
    printf("%d\n", sum / 5);

    int n = 5;
    printf("%d", (n * (n + 1)) / 2);

    return 0;
}