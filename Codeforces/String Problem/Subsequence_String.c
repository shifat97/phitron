#include<stdio.h>
#include<string.h>
int main() {
    char s[10001], c[5] = "hello";
    scanf("%s", s);
    int len = strlen(s);
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == c[j]) {
            j++;
        }
        if (j == 5) {
            printf("YES");
            break;
        }
    }
    if (j < 5) printf("NO");
    return 0;
}