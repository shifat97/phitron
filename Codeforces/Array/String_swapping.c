#include<stdio.h>
#include<string.h>
int main() {
    char s1[11], s2[11];
    scanf("%s", s1);
    scanf("%s", s2);
    int count1 = 0, count2 = 0;
    
    for (int i = 0; s1[i] != '\0'; i++) {
        count1++;
    }
    
    for (int i = 0; s2[i] != '\0'; i++) {
        count2++;
    }
    
    printf("%d %d\n", count1, count2);
    printf("%s%s", s1, s2);
    printf("\n");
    
    char temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;

    printf("%s %s", s1, s2);
    
    return 0;
}