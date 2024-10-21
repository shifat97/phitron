#include<stdio.h>
int main() {
    int n = 12345;
    char s[10];
    for (int i = 0, j = 4; i < 5; i++, j--) {
        int d = n % 10;
        s[j] = d + '0';
        n = n / 10;
    }
    s[5] = '\0';
    fputs(s, stdout);
    return 0;
}