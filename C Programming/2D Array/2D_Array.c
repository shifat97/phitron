#include <stdio.h>
int main()
{
    int a[3][5];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d %d Address: %d\n", i, j, &a[i][j]);
        }
    }

    return 0;
}
