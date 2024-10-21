#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char s[100];
        int count = 0;
        scanf("%s", s);
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                
                count++;
            }
        }
        if (count > 10) {
            printf("%c%d%c", s[0], count - 2, s[count - 1]);
        } else {
            fputs(s, stdout);
        }
        printf("\n");
    }
    return 0;
}