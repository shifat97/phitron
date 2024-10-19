#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    double d = (double)(x * y) / 12;
    printf("%.3lf\n", d);
    return 0;
}