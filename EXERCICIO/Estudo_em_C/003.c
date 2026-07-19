#include <stdio.h>

int main() {
    
    /*// =====================================================
    // 1 - Leitura e apresentação de uma matriz 3x3
    // =====================================================

    printf("=== EXERCÍCIO 1 ===\n");

    int matriz[3][3];
    

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o [%d][%d] número: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Apresentando uma matriz

    for(int i = 0; i < 3; i++){
        printf("\n");
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
    }   


    // =====================================================
    // 2 - Soma dos elementos da matriz
    // =====================================================

    printf("\n=== EXERCÍCIO 2 ===\n");

    int matriz[3][3];
    int soma = 0;
    

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o [%d][%d] número: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("A soma é %d", soma);


    // =====================================================
    // 3 - Maior elemento numa matriz 3x3
    // =====================================================

    printf("\n=== EXERCÍCIO 3 ===\n");

    int matriz[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o [%d][%d] número: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Encontrando o MAIOR número da matriz e sua posição.
    int maior = matriz[0][0];
    int linha = 0;
    int coluna = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    printf("Maior valor = %d\n", maior);
    printf("Linha = %d\n", linha);
    printf("Coluna = %d\n", coluna);
    
    

    // =====================================================
    // 4 - Diagonal principal
    // =====================================================

    printf("\n=== EXERCÍCIO 4 ===\n");

    int matriz4[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz4[i][j]);
        }
    }

    printf("Diagonal principal:\n");

    for (int i = 0; i < 3; i++) {
        printf("%d ", matriz4[i][i]);
    }

    printf("Diagonal secundaria:\n");

    for (int i = 0; i < 3; i++) {
        printf("%d ", matriz4[i][2 - i]);
    }
    
  

    // =====================================================
    // 5 - Soma da diagonal principal
    // =====================================================

    printf("\n\n=== EXERCÍCIO 5 ===\n");

    int matriz5[3][3];
    int somaDiagonal = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz5[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        somaDiagonal += matriz5[i][i];
    }

    printf("A soma da diagonal = %d", somaDiagonal);

      */


    // =====================================================
    // 6 - Contagem de números pares
    // =====================================================

    printf("\n=== EXERCÍCIO 6 ===\n");

    int matriz6[3][3];
    int totalPares = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valo da posição [%d] [%d]: ", i, j);
            scanf("%d", &matriz6[i][j]);

            if(matriz6[i][j] % 2 == 0){
                totalPares++;
            }
        }
    }

    printf("O total de números pares são %d\n", totalPares);



    return 0;
}