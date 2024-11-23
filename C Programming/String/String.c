#include<stdio.h>
int main() {
    char str[10] = "abcd";
    for (int i = 0; i < 4; i++) {
        printf("%c", str[i]);
    }
    printf("\n%s", str);
    return 0; 
}