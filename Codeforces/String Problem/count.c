#include<stdio.h>
int main() {
    char s[1000001];
    scanf("%s", s);
    int sum = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        int d = s[i] - '0';
        sum += d;
    }
    printf("%d", sum);
    return 0;
}