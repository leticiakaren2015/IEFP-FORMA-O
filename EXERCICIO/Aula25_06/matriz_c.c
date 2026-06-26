/*3- Maior elemento numa matriz 4×4
Lê uma matriz 4×4 de números inteiros.
Determina e apresenta:
• o maior valor existente na matriz,
• a posição (linha e coluna) onde esse
valor se encontra.*/

#include <stdio.h>

int main (){  
    int linha = 3, coluna = 3;
    int matriz[3][3];
    int maior = matriz[0][0];
    int linhaMaior = 0, colunaMaior = 0;

    for(int i = 0; i < linha; i++){
        for (int j= 0; j < coluna; j++){
            printf("digite um número da linha %d coluna %d: ", (i+1), (j+1));
            scanf("%d", &matriz[i][j]);

            if(i == 0 && j == 0){
                maior = matriz[i][j];
            }

            if(matriz[i][j] > maior){
            maior = matriz[i][j];
            linhaMaior = i;
            colunaMaior = j;
            }
        }
    }

    printf("\n");
    
    
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("O maior número é %d e está na linha %d  na coluna %d", maior,(linhaMaior+1),(colunaMaior+1) );
    printf("\n\n");
    return 0;
}