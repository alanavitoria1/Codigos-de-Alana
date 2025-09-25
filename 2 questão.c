#include <stdio.h>
int main() 
{
    int vetor[15], i, maior, menor;
    printf("Digite 15 numeros inteiros:\n");
    for (i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
    menor = vetor[0];
    for (i = 1; i < 15; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    printf("O maior valor do vetor eh: %d\n", maior);
    printf("O menor valor do vetor eh: %d\n", menor);
    return 0;
}