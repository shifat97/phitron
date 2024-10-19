#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int arr, sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr);
        sum += arr;
    }
    printf("%lld", llabs(sum));
    return 0;
}