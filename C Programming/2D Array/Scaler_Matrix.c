// Scaler Matrix
/*
1 0 0
0 1 0
0 0 1
*/

#include <stdio.h>

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

    int element = a[0][0];
    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (a[i][j] != element)
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if (a[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
    }

    if (flag == 1)
    {
        printf("Scaler");
    }
    else
    {
        printf("Non scaler");
    }

    return 0;
}