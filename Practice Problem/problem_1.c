#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "abdddabcexxaabxcd", sub[100] = "abc";

    int i = 0, j = 0;
    int sub_match = 0;

    while (i < strlen(str))
    {
        if (str[i] == sub[j])
        {
            j++;
            if (j == strlen(sub))
            {
                sub_match++;
                j = 0;
            }
        }
        else
        {
            i -= j;
            j = 0;
        }

        i++;
    }

    printf("Output: %d\n", sub_match);

    return 0;
}