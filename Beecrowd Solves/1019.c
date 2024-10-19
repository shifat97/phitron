#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int hour = x / 3600;
    int rem = x % 3600;
    int minute = rem / 60;
    rem = rem % 60;
    int sec = rem / 1;
    printf("%d:%d:%d\n", hour, minute, sec);
    return 0;
}