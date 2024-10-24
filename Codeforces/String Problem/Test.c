#include<stdio.h>
#include<string.h>

int main() {
    char s1[1001], s2[1001], s3[1001], min[1001], max[1001];
    scanf("%s %s %s", s1, s2, s3);

    int flag = 0; 

    int len_a = strlen(s1);
    int len_b = strlen(s2);
    int len_c = strlen(s3);

    int n;

    if (len_a < len_b && len_a < len_c) n = len_a;
    else if (len_b < len_a && len_b < len_c) n = len_b;
    else n = len_b;

    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i]) {
            flag = 1;
            if (s1[i] < s2[i]) {
                strcpy(min, s1);
                strcpy(max, s2);
                break;
            } else {
                strcpy(min, s2);
                strcpy(max, s1);
                break;
            }
        }
    }

    flag = 0;
    for (int i = 0; i < n; i++) {
        if (s3[i] != min[i]) {
            flag = 1;
            if (s3[i] < min[i]) {
                strcpy(max, min);
                strcpy(min, s3);
                break;
            } else {
                strcpy(max, s3);
                break;
            }
        }
    }

    fputs(min, stdout);
    printf("\n");
    fputs(max, stdout);

    return 0;
}