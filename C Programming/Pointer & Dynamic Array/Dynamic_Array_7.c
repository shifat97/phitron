#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long *a = (long long *)malloc(1 * sizeof(long long));

    for (int i = 0; i < n; i++)
    {
        long long x;
        scanf("%lld", &x);
        a[i] = x;
        a = (long long *)realloc(a, (i + 2) * sizeof(long long));
    }

    for (int i = 0; i < n; i++)
    {
        printf("%lld ", a[i]);
    }

    return 0;
}