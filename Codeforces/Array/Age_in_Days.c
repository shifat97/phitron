#include<stdio.h>
int main() {
    int d;
    scanf("%d", &d);
    int year = d / 365;
    d = d % 365;
    int month = d / 30;
    d = d % 30;
    printf("%d years\n", year);
    printf("%d months\n", month);
    printf("%d days\n", d);
    return 0;
}