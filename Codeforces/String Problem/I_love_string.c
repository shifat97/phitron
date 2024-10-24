#include<stdio.h>
#include<string.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        char s[51], t[51], c[51];
        scanf("%s %s", s, t);
        int sl = strlen(s);
        int tl = strlen(t);

        int i = 0;

        while (i < sl && i < tl) {
            printf("%c%c", s[i], t[i]);
            i++;
        }

        while (i < sl) {
            printf("%c", s[i]);
            i++;
        }

        while (i < tl) {
            printf("%c", t[i]);
            i++;
        }

        printf("\n");
    }
    return 0;
}





        // int n;
        // if (sl <= tl) {
        //     n = sl;
        //     strcpy(c, s);
        // }
        // else {
        //     n = tl;
        //     strcpy(c, t);
        // }

        // char r[sl + tl];
        // for (int i = 0, j = 0; i < n; i++, j+=2) {
        //     r[j] = s[i];
        //     r[j+1] = t[i]; 
        // }

        // int rl = strlen(r);

        // for (int i = rl, j = 0; i <= sl + tl; i++, j++) {
        //     r[i] = c[n + j];
        // }

        // // r[sl + tl] = '\0';