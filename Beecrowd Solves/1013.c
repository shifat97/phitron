#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int r1 = (a + b + abs(a - b)) / 2;
    int r2 = (r1 + c + abs(r1 - c)) / 2;
    printf("%d eh o maior\n", r2);
    return 0;
}