# include <stdio.h>

int main(){

    char nome[30];
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome),stdin);

    printf("Olá, %s", nome);

    return 0;
}