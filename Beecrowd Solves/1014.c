#include <stdio.h>
int main()
{
    int x;
    double y;
    scanf("%d %lf", &x, &y);
    double result = x / y;
    printf("%.3lf km/l\n", result);
    return 0;
}