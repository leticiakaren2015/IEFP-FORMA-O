// O programa deve ler números inteiros até o utilizador introduzir 0. No final, deve mostrar a soma dos números introduzidos.

#include <stdio.h>

int main(){

    int num, soma = 0;

    do
    {
        printf("Digite um número: ");
        scanf("%d",&num);

        soma += num;
    } while (num != 0);
    
    printf("O total  da soma é %d\n", soma);
    printf("Fim do Programa!");

    return 0;
}




