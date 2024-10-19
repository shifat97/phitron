#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    double volume;
    volume = (4.0 / 3) * 3.14159 * n * n * n;
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}