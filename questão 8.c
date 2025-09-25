#include <stdio.h>

int main()
{
    double distancia, combustivel, consumoMedio;

    printf("Digite a distancia total percorrida (km): ");
    scanf("%lf", &distancia);

    printf("Digite o total de combustivel gasto (litros): ");
    scanf("%lf", &combustivel);

    consumoMedio = distancia / combustivel;

    printf("O consumo medio do carro foi: %.3lf km/l\n", consumoMedio);

    return 0;
}