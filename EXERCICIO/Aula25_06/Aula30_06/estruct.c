/*1-Cria uma struct Pessoa com:
int idade; float altura; float peso;
O programa deve:
- ler os dados de uma pessoa;
- apresentar idade, altura e peso;
- calcular e mostrar o IMC.
Fórmula: imc = peso / (altura * altura);*/


#include <stdio.h>

// definição da estrutura
struct Pessoa
{
    int idade;
    float altura;
    float peso;
};


int main(){

    struct  Pessoa p1={15, 1.56, 76.5};
    float imc;

    printf("Digite sua idade: ");
    scanf("%d", &p1.idade);

    printf("Digite seu peso: ");
    scanf("%f", &p1.peso);

    printf("Digite sua altura: ");
    scanf("%f", &p1.altura);


    imc = p1.peso / (p1.altura * p1.altura);

    printf("Sua altura é %d, seu peso é %1.f, e sua altura é %.1f.", p1.idade, p1.peso, p1.altura);

    printf("Seu IMC é %1.f", imc);


    return 0;
}
