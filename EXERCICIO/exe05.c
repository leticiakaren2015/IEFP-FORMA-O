#include <stdio.h>

int main(){

    float numero1;
    float numero2;
    char opcao;

    char continuar = 's';

    while (continuar == 's')
    {

        printf("Digite o primeiro número: ");
        scanf("%f", &numero1);

        printf("Digite o segundo número: ");
        scanf("%f", &numero2);

        printf("Opção[1] para Soma\n"
                "Opção[2] para Subtração\n"
                "Opção[3] para multiplicação\n"
                "Opção[4] para Divisão\n");

        printf("Digite sua opção: ");
        scanf(" %c", &opcao);


        switch (opcao)
        {
            case '1':
                printf("\nresultado é %.1f", numero1 + numero2);
                break;

            case '2':
                printf("\nresultado é %.1f", numero1 - numero2);
                break;

                case '3':
                printf("\nresultado é %.1f", numero1 * numero2);
                break;

            case '4':
                printf("\nresultado é %.1f", numero1 / numero2);
                break;

            default:
                printf("Opção Invalida!!!");
                break;
            }

        printf("\nQuer continuar [S] ou [N]: ");
        scanf(" %c", &continuar);
    }

    printf("Fim do Programa...");

}
