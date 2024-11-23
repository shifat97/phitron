#include <stdio.h>
#include <math.h>
int main()
{
    double n;
    scanf("%lf", &n);
    int x = (int)n;
    double y = n - x;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", x / 100);
    x = x % 100;
    printf("%d nota(s) de R$ 50.00\n", x / 50);
    x = x % 50;
    printf("%d nota(s) de R$ 20.00\n", x / 20);
    x = x % 20;
    printf("%d nota(s) de R$ 10.00\n", x / 10);
    x = x % 10;
    printf("%d nota(s) de R$ 5.00\n", x / 5);
    x = x % 5;
    printf("%d nota(s) de R$ 2.00\n", x / 2);
    x = x % 2;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", x);
    int m = round(y * 100);
    printf("%d moeda(s) de R$ 0.50\n", m / 50);
    m = m % 50;
    printf("%d moeda(s) de R$ 0.25\n", m / 25);
    m = m % 25;
    printf("%d moeda(s) de R$ 0.10\n", m / 10);
    m = m % 10;
    printf("%d moeda(s) de R$ 0.05\n", m / 5);
    m = m % 5;
    printf("%d moeda(s) de R$ 0.01\n", m / 1);

    return 0;
}