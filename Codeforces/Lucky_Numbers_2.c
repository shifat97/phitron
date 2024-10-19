#include<stdio.h>
int main() {
    int x, y, count = 0;
    scanf("%d %d", &x, &y);
    for (int i = x; i <= y; i++) {
        int flag = -1, j = i;
        while (j > 0) {
            int d = j % 10;
            if (d == 4 || d == 7) {
                flag = 0;
                j = j / 10;
            }  else {
                flag = -1;
                break;
            }
        }
        if (flag == 0) {
            printf("%d ", i);
            count++;
        }
    }
    if (count == 0) printf("%d", -1);
    return 0;
}