#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double root = (b * b) - (4 * a * c);
    if (root > 0 && root != 0 && a != 0)
    {
        root = sqrt(root);
        double r1 = (-b + root) / (2 * a);
        double r2 = (-b - root) / (2 * a);
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
}