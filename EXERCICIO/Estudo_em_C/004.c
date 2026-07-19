#include <stdio.h>

int main() {

    // =====================================================
    // 1 - Soma de cada coluna
    // =====================================================

    printf("=== EXERCÍCIO 1 ===\n");

    int matriz1[3][3];
    int soma;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\nSoma das colunas:\n");

    for (int j = 0; j < 3; j++) {

        soma = 0;

        for (int i = 0; i < 3; i++) {
            soma += matriz1[i][j];
        }

        printf("Coluna %d = %d\n", j, soma);
    }

    // =====================================================
    // 2 - Diagonal secundária
    // =====================================================

    printf("\n=== EXERCÍCIO 2 ===\n");

    int matriz2[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    printf("Diagonal secundaria:\n");

    for (int i = 0; i < 3; i++) {
        printf("%d ", matriz2[i][2 - i]);
    }

    printf("\n");

    // =====================================================
    // 3 - Soma das diagonais
    // =====================================================

    printf("\n=== EXERCÍCIO 3 ===\n");

    int matriz3[3][3];
    int somaPrincipal = 0;
    int somaSecundaria = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &matriz3[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {

        somaPrincipal += matriz3[i][i];

        somaSecundaria += matriz3[i][2 - i];
    }

    printf("Soma da diagonal principal = %d\n", somaPrincipal);
    printf("Soma da diagonal secundaria = %d\n", somaSecundaria);

    if (somaPrincipal > somaSecundaria)
        printf("A diagonal principal possui a maior soma.\n");
    else if (somaSecundaria > somaPrincipal)
        printf("A diagonal secundaria possui a maior soma.\n");
    else
        printf("As duas diagonais possuem a mesma soma.\n");

    // =====================================================
    // 4 - Copiar matriz A para matriz B
    // =====================================================

    printf("\n=== EXERCÍCIO 4 ===\n");

    int A[3][3];
    int B[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Copiando A para B
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            B[i][j] = A[i][j];
        }
    }

    printf("\nMatriz A:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}