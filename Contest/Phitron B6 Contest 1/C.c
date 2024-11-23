#include <stdio.h>

int main()
{
    char s[1001];
    scanf("%s", s);

    int freq[26] = {0};
    int odd = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 != 0)
        {
            odd++;
        }
    }

    if (odd > 0)
    {
        printf("%d", odd - 1);
    }
    else
    {
        printf("%d", 0);
    }
}