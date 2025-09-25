#include <stdio.h>

int main(){
    int i, j, A[3][3], B[3][3], C[3][3];

    printf("Digite a primeira matriz:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite a segunda matriz:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Matriz soma:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}