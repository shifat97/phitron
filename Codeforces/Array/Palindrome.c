#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    long long int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    int flag = -1;
    for (int i = 0, j = n - 1; i <= j; i++, j--) {
        if (a[i] == a[j]) {
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