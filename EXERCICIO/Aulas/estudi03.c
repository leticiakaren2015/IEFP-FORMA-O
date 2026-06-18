# include <stdio.h>

int main (){

    char r;
    char m;

    printf("Digite uma letra: ");
    scanf(" %c", &r);
    

    printf("Digite outra letra: ");
    scanf(" %c", &m);
    

    printf("\nVocê digitou as letras '%c' e '%c'", r, m);

    return 0;
}