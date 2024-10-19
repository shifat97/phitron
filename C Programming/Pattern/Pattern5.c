#include <stdio.h>
// Solution 1
// int main()
// {
//     int n = 5;
//     int m = n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = m; j >= 1; j--)
//         {
//             printf("%d ", j);
//         }
//         m = m - 1;
//         printf("\n");
//     }
//     return 0;
// }

// Solution 2
int main()
{
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i + 1; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}