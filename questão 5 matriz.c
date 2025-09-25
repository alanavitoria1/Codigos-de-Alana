#include <stdio.h>

int main(){
    int i, j, k, A[2][2], B[2][2], C[2][2];

    printf("Digite a primeira matriz 2x2:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite a segunda matriz 2x2:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            C[i][j] = 0;
            for(k = 0; k < 2; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Matriz resultante da multiplicacao:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}