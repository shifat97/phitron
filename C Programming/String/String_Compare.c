#include<stdio.h>
#include<string.h>

int main() {
    char a[20] = "ari";
    char b[20] = "airplane";

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
                printf("a is small");
                break;
            } else {
                printf("b is small");
                break;
            }
        }
    }

    if (flag == 0) {
        if (len_a == len_b) printf("both are same");
        else if (len_a < len_b) printf("a is small");
        else printf("b is small");
    }

    return 0;
}