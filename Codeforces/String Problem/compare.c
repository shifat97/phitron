#include<stdio.h>
#include<string.h>

int main() {
    char a[21];
    char b[21];

    scanf("%s", a);
    scanf("%s", b);

    int flag = 0; 

    int len_a = strlen(a);
    int len_b = strlen(b);

    int n;

    if (len_a < len_b) n = len_a;
    else n = len_b;

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            flag = 1;
            if (a[i] < b[i]) {
                printf("%s", a);
                break;
            } else {
                printf("%s", b);
                break;
            }
        }
    }

    if (flag == 0) {
        if (len_a == len_b) printf("%s", a);
        else if (len_a < len_b) printf("%s", a);
        else printf("%s", b);
    }

    return 0;
}

// #include<stdio.h>
// #include<string.h>

// int main() {
//     char a[21], b[21];
//     fgets(a, sizeof(a), stdin);
//     fgets(b, sizeof(b), stdin);
//     int r = strcmp(a, b);

//     if (r == 0) {
//         fputs(a, stdout);
//     } else if (r < 0) {
//         fputs(a, stdout);
//     } else {
//         fputs(b, stdout);
//     }

//     return 0;
// }