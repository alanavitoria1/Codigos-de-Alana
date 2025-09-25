#include <stdio.h>

int main(){
    int i, j, linha, soma = 0, matriz[5][5];

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Digite o elemento a%d%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite a linha (1 a 5) que deseja somar: ");
    scanf("%d", &linha);
    linha--; 

    for(j = 0; j < 5; j++){
        soma += matriz[linha][j];
    }

    printf("A soma dos elementos da linha %d eh: %d\n", linha+1, soma);
    return 0;
}