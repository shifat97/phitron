#include <stdio.h>
int main()
{
    char s[10000001];
    fgets(s, sizeof(s), stdin);

    int a[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        int index = s[i] - 'a';
        a[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (a[i] > 0)
        {
            printf("%c : %d\n", 'a' + i, a[i]);
        }
    }

    return 0;
}