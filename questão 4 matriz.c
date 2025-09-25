#include <stdio.h>

int main(){
    int i, j, matriz[3][2], transposta[2][3];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("Digite o elemento a%d%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("Matriz transposta:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}