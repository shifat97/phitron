#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum1 += a[i][j];
            }

            if (i + j == n - 1)
            {
                sum2 += a[i][j];
            }
        }
    }

    // if (sum1 < 0)
    // {
    //     sum1 *= -1;
    // }

    // if (sum2 < 0)
    // {
    //     sum2 *= -1;
    // }

    printf("%d", abs(sum1 - sum2));

    return 0;
}