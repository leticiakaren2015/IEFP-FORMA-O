/*2- Soma dos elementos da matriz 3×3
• Lê novamente uma matriz 3×3.
• Calcula e apresenta a soma de todos os
seus elementos.*/
#include<stdio.h>
int main (){   
    int matriz[3][3];

    for(int i = 0; i < 3; i++){
        for (int j= 0; j < 3; j++){
            printf("digite um número da linha %d coluna %d: ", (i+1), (j+1));
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");

    int soma = 0;
    for(int i = 0; i < 3; i++){
        printf("\n");
        for(int j = 0; j < 3; j++){
            printf("%d\t",matriz[i][j]);
            soma+=matriz[i][j];
        }
        printf("\n");
        
    }
    printf("\n");
    printf("A soma total é %d",soma);
    printf("\n");
    return 0;
}