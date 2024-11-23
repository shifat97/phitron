#include <stdio.h>
int main()
{
    char s[1001], t[1001];
    scanf("%s %s", s, t);

    int freq[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    int flag = 1;
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            flag = 0;
            break;
        }
    }

    if (flag) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}