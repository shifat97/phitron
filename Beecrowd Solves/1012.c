#include <stdio.h>
int main()
{
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    double t = 0.5 * A * C;
    double r = 3.14159 * C * C;
    double tr = 0.5 * (A + B) * C;
    double s = B * B;
    double re = A * B;
    printf("TRIANGULO: %.3lf\n", t);
    printf("CIRCULO: %.3lf\n", r);
    printf("TRAPEZIO: %.3lf\n", tr);
    printf("QUADRADO: %.3lf\n", s);
    printf("RETANGULO: %.3lf\n", re);
    return 0;
}