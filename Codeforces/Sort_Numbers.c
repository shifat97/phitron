#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int x = a, y = b, z = c;
    if (b < a)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if (c < a)
    {
        int temp = a;
        a = c;
        c = temp;
    }
    if (c < b)
    {
        int temp = b;
        b = c;
        c = temp;
    }

    printf("%d\n%d\n%d", a, b, c);
    printf("\n");
    printf("\n%d\n%d\n%d", x, y, z);
    return 0;
}