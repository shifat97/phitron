#include <stdio.h>
int main()
{
    float a1, a2, a3, a4;
    scanf("%f %f %f %f", &a1, &a2, &a3, &a4);
    double avg1 = ((a1 * 2) + (a2 * 3) + (a3 * 4) + (a4 * 1)) / 10;

    printf("Media: %.1lf\n", avg1);

    if (avg1 >= 7.0)
        printf("Aluno aprovado.\n");
    else if (avg1 < 5.0)
        printf("Aluno reprovado.\n");
    else
    {
        printf("Aluno em exame.\n");
        float b;
        scanf("%f", &b);
        printf("Nota do exame: %.1f\n", b);
        double avg2 = (avg1 + b) / 2;

        if (avg2 >= 5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");

        printf("Media final: %.1lf\n", avg2);
    }
    return 0;
}