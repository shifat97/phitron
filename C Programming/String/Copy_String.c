#include<stdio.h>
#include<string.h>
int main() {

    char a[10];

    char b[10] = "abcdef";

    int len = strlen(b);

    for (int i = 0; i < len; i++) {
        a[i] = b[i];
    }

    a[len] = '\0';

    printf("a = %s, b = %s\n", a, b);

    char c[10];
    strcpy(c, b);

    printf("c = %s", c);

    return 0;

}