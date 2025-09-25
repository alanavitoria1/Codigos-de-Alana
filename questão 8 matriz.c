#include <stdio.h>

int main(){
    int i, j, num, count = 0, matriz[4][4];

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite o elemento a%d%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o numero a procurar: ");
    scanf("%d", &num);

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(matriz[i][j] == num){
                count++;
            }
        }
    }
    
    printf("O numero %d aparece %d vezes.\n", num, count);
    return 0;
}