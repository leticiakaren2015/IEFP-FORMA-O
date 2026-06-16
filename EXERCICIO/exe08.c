// Pede ao utilizador um número positivo.Enquanto o o número for negativo ou zero,
// o programa deve voltar a pedir o número.

#include <stdio.h>

int main(){

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    while (num < 1)
    {
        printf("Digite um número: ");
        scanf("%d", &num);
    }

    
    printf("Fim do Programa");
    return 0;
    
}