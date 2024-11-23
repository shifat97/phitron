#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch >= 48 && ch <= 57)
        printf("IS DIGIT");
    else
    {
        printf("ALPHA\n");

        if (ch >= 65 && ch <= 90)
            printf("IS CAPITAL");
        else
            printf("IS SMALL");
    }

    return 0;
}