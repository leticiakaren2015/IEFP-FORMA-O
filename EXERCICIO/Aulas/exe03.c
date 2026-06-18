#include<stdio.h>

int main(){

    int nota;

    printf("Digite uma nota: ");
    scanf("%d", &nota);

    if (nota == 0){
        printf("O número que você digitou 0");
    } else if (nota > 0){
        printf("É positivo\n");
    } else{
        printf("Negativo\n");
    }

    return 0;

}