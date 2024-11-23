#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int year = n / 365;
    n = n % 365;
    int month = n / 30;
    int days = n % 30;
    printf("%d ano(s)\n", year);
    printf("%d mes(es)\n", month);
    printf("%d dia(s)\n", days);
    return 0;
}