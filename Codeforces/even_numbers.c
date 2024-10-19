#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int flag = -1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            flag = 0;
        }
    }

    if (flag == -1)
    {
        printf("%d\n", flag);
    }

    return 0;
}