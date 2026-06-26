/*1- Leitura e apresentação de uma matriz 3×3
• Lê uma matriz 3×3 de números inteiros.
• Mostra a matriz no ecrã em formato de
tabela.*/

#include <stdio.h>

int main (){   
    int matriz[3][3];

    for(int i = 0; i < 3; i++){
        for (int j= 0; j < 3; j++){
            printf("digite um número da linha %d coluna %d: ", (i+1), (j+1));
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");

    for(int i = 0; i < 3; i++){
        printf("\n");
        for(int j = 0; j < 3; j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}