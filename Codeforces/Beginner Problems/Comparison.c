#include <stdio.h>
int main()
{
    int a, b;
    char s;
    scanf("%d %c %d", &a, &s, &b);
    if (s == 62 && a > b)
    {
        printf("Right");
    }
    else if (s == 61 && a == b)
    {
        printf("Right");
    }
    else if (s == 60 && a < b)
    {
        printf("Right");
    }
    else
    {
        printf("Wrong");
    }
}