// O programa deve ler números inteiros até o utilizador introduzir 0. No final, deve mostrar a soma dos números introduzidos.

#include <stdio.h>

int main(){

    int num, soma = 0;


    while (num > 0)
    {
        printf("Digite um número: ");
        scanf("%d",&num);

        soma += num;
    }
    

    printf("O total  da soma é %d\n", soma);
    printf("Fim do Programa!");

    return 0;
}

