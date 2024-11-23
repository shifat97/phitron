#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int f;
    scanf("%d", &f);
    int flag = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == f)
        {
            flag = i;
            break;
        }
    }
    if (flag == -1)
        printf("%d", -1);
    else
        printf("%d", flag);
    return 0;
}