#include <stdio.h>

int main()
{
    char nome[50];
    double valorHora, horas, salario;

    printf("Digite o nome do funcionario: ");
    scanf("%s", nome);

    printf("Digite o valor por hora: ");
    scanf("%lf", &valorHora);

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%lf", &horas);

    salario = valorHora * horas;

    printf("O funcionario %s deve receber R$ %.2lf\n", nome, salario);

    return 0;
}