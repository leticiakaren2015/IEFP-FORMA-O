//Lê um número inteiro e mostre sua tabuada de 1 até 10.

#include <stdio.h>

int main(){

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    for(int i = 0; i < 11; i++){
        printf("%d x %d = %d \n", num, i, (num*i));
    }
    return 0;
}