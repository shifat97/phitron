#include<stdio.h>
int main() {
    char s[5] = "50843";
    int result = 0;
    for (int i = 0; i < 5; i++) {
        int num = s[i] - '0';
        result = (result * 10) + num;
    }
    printf("%d", result);
    return 0;
}