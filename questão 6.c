#include <stdio.h>
#include <math.h>

int main()
{
    double r, area;
    printf("Digite o raio do circulo: ");
    scanf("%lf", &r);
    area = M_PI * r * r;  // M_PI vem da math.h
    printf("A area do circulo eh: %.3lf\n", area);
    return 0;
}