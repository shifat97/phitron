#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        int n = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", n++);
        }
        printf("\n");
    }
    return 0;
}