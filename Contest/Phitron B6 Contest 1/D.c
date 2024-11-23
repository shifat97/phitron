#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = a[0];
    int min = a[0];
    int cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            cnt1++;
        }
        if (a[i] < min)
        {
            min = a[i];
            cnt2++;
        }
    }
    printf("%d %d", cnt1, cnt2);
    return 0;
}