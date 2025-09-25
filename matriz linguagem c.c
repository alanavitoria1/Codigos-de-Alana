#include <stdio.h>
int main(){
    int i, j, matriz[3][3];
    for (i= 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o elemento a%d%d:",i+1,j+1);
            scanf("%d", &matriz[i][i]);
        }
    }
    printf("A matriz digitada foi: \n");
    for(i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", matriz [i][j]);
        }
        printf("\n");
    }
    return 0;
}
