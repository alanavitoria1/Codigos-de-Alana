#include <stdio.h>

int main()
{
    double A, B, C;
    double quadrado, triangulo, trapezio;

    printf("Digite o valor de A: ");
    scanf("%lf", &A);

    printf("Digite o valor de B: ");
    scanf("%lf", &B);

    printf("Digite o valor de C: ");
    scanf("%lf", &C);

    quadrado = A * A;
    triangulo = (A * B) / 2.0;
    trapezio = ((A + B) * C) / 2.0;

    printf("Area do quadrado: %.2lf\n", quadrado);
    printf("Area do triangulo: %.2lf\n", triangulo);
    printf("Area do trapezio: %.2lf\n", trapezio);

    return 0;
}