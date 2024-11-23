#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);

    long int *a = (long int *)malloc(x * sizeof(long int));

    long int sum = 0;

    for (int i = 0; i < x; i++)
    {
        scanf("%ld", &a[i]);
    }

    long int *p = a;

    for (int i = 0; i < x; i++)
    {
        sum += p[i];
    }

    if (sum < 0)
    {
        sum *= -1;
    }

    printf("%ld", sum);

    free(a);

    return 0;
}