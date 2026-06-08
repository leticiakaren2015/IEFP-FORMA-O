#include<stdio.h>

int main(){
    //DECLARADO UMA VARIÁVEL
    float numero1;
    float numero2;
    float resultado;
    char opcao;

    // SOLICITAR O PRIMEIRO NUMERO
    printf("Digite primeiro numero: ");
    scanf("%f", &numero1);

    //SOLICITAR O SEGUNDO NUMERO
    printf("Digite primeiro numero: ");
    scanf("%f", &numero2);

    // EXIBIR MENU
    printf(
            "Digite [1] --- soma\n"         
            "Digite [2] --- subtração\n"
            "Digite [3] --- multiplicação\n"
            "Digite [4] --- divisão\n");

    // DIGITANDO A OPÇÃO
    printf("Digite sua Opção: ");
    scanf(" %c", &opcao);

    //SOMA
    if(opcao == '1'){
        resultado = numero1 + numero2;
        printf("O resultado é %.1f", resultado);
    }

    //DIVISÃO
    else if(opcao == '2'){
        resultado = numero1 - numero2;
        printf("O resultado é %.1f", resultado);
    }

    //MULTIPLICAÇÃO
    else if(opcao == '3'){
        resultado = numero1 * numero2;
        printf("O resultado é %.1f", resultado);
    }

    // DIVISÃO
    else if(opcao == '4'){
        resultado = numero1 / numero2;
            if(numero1 < numero2){
                printf("Operação Inválida");
            }
        printf("O resultado é %1.f", resultado);
    }

    //OPÇÃO INVÁLIDA
    else {
        printf("Operação inválida");
    }

return 0 ;

}