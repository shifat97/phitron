#include<stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= m; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (i == a[j]) count++;
        }
        printf("%d\n", count);
    }
    return 0;
}