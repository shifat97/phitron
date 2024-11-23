#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m], cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
     
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int p = 1;
            if (i > 0 && a[i][j] <= a[i-1][j]) {
                p = 0;
            }
            if (i < n - 1 && a[i][j] <= a[i+1][j]) {
                p = 0;
            }
            if (j > 0 && a[i][j] <= a[i][j-1]) {
                p = 0;
            }
            if (j < m - 1 && a[i][j] <= a[i][j+1]) {
                p = 0;
            }

            if (p == 1) {
                printf("%d %d\n", i+1, j+1);
                cnt++;
            }
        }
    }

    printf("%d", cnt);
    return 0;
}