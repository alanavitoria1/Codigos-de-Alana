#include <stdio.h>

int main(){
    int i, j, matriz[3][3], temp;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o elemento a%d%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inverter colunas
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3/2; j++){
            temp = matriz[i][j];
            matriz[i][j] = matriz[i][2-j];
            matriz[i][2-j] = temp;
        }
    }

    // Inverter linhas
    for(j = 0; j < 3; j++){
        for(i = 0; i < 3/2; i++){
            temp = matriz[i][j];
            matriz[i][j] = matriz[2-i][j];
            matriz[2-i][j] = temp;
        }
    }

    printf("Matriz invertida:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}