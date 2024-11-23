#include <stdio.h>
int main()
{
    int code, unit;
    double price;
    double total = 0;
    for (int i = 0; i < 2; ++i)
    {
        scanf("%d %d %lf", &code, &unit, &price);
        total = total + (unit * price);
    }
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}