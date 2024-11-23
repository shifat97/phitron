#include<stdio.h>
int main() {
    int t; 
    scanf("%d", &t);
    while (t != 0) {
        int x;
        long long fact = 1;
        scanf("%d", &x);
        for (int i = 1; i <= x; i++) {
            fact *= i;
        }
        printf("%lld\n", fact);
        t -= 1;
    }
}