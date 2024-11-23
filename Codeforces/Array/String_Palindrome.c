#include<stdio.h>
int main() {
    char s[1000];
    scanf("%s", s);
    int flag = -1, count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        count++;
    }
    for (int i = 0, j = count - 1; i <= j; i++, j--) {
        if (s[i] == s[j]) {
            flag = 0;
        } else {
            flag = -1;
            break;
        }
    }
    if (flag == -1) printf("NO");
    else printf("YES");
    return 0;
}