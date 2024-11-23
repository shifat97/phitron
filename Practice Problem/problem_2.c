#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "hello world", ch = 'l';
    char freq[26] = {0};

    for (int i = 0; i < strlen(str); i++)
    {
        char c = str[i];
        int index = c - 'a';
        freq[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%c %d\n", i + 'a', freq[i]);
    }

    printf("OUTPUT: %d", freq[ch - 'a']);

    return 0;
}