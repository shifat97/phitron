#include <stdio.h>
int main()
{
    int marks;
    scanf("%d", &marks);

    if (marks >= 50 && marks <= 100)
    {
        if (marks >= 80 && marks <= 100)
        {
            printf("You have got A+\n");
            if (marks >= 90)
                printf("Congratulations, you have got scholarship!\n");
        }

        else if (marks >= 70 && marks < 80)
            printf("You have got A\n");
        else if (marks >= 60 && marks < 70)
            printf("You have got A-\n");
        else if (marks >= 50 && marks < 60)
            printf("You have got B\n");

        printf("You have passed\n");
    }

    else if (marks >= 0 && marks < 50)
    {
        printf("You have got F\n");
        printf("You have failed the exam\n");
    }

    else
    {
        printf("Invalid marks!");
    }

    return 0;
}