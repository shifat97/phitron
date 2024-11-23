#include <stdio.h>

int main()
{
    int a = 5;

    int *b = &a;

    printf("%d\n", b);  // Address
    printf("%d\n", *b); // Value

    *b = 6;

    int val = *b;

    printf("%d\n", val);
    printf("%d\n", a);

    return 0;
}