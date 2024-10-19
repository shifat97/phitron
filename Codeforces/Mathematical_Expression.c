#include <stdio.h>
int main()
{
    int a, b, c;
    char s, q;
    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);
    if (s == 43 && q == 61 && a + b == c)
    {
        printf("Yes");
    }
    else if (s == 45 && q == 61 && a - b == c)
    {
        printf("Yes");
    }
    else if (s == 42 && q == 61 && a * b == c)
    {
        printf("Yes");
    }
    else if (s == 43 && q == 61 && a + b != c)
    {
        printf("%d", a + b);
    }
    else if (s == 45 && q == 61 && a - b != c)
    {
        printf("%d", a - b);
    }
    else if (s == 42 && q == 61 && a * b != c)
    {
        printf("%d", a * b);
    }
}