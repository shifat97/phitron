#include <stdio.h>
int main()
{
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);

        if (x % 2 == 0)
            even++;
        else
            odd++;

        if (x >= 0)
            positive++;
        else
            negative++;
    }

    printf("Even = %d\n", even);
    printf("Odd = %d\n", odd);
    printf("Positive = %d\n", positive);
    printf("Negative = %d\n", negative);

    return 0;
}