#include <stdio.h>

int main() {
    //========================================
    // 1 - Leitura e apresentação de valores:
    //=======================================
    printf("=== EXERCÍCIO 1 ===\n");

    int vetor1[10];

    for(int i = 0; i < 10; i++){
        printf("Digite um número: ");
        scanf("%d", &vetor1[i]);
    }

    printf("Valores introduzidos:\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", vetor1[i]);
    }

    printf("\n\n");

    //========================================
    // 2 - Soma dos elementos
    //=======================================
    printf("=== EXERCÍCIO 2===\n");
    int vetor2[8];
    int soma = 0;

    for(int i = 0; i < 8; i++){
        printf("Digite o %d número: ", i + 1);
        scanf("%d", &vetor2[i]);
        soma += vetor2[i];
    }
    printf("Soma = %d\n\n", soma);

    //=============================================================
    // 3 - Maior e menor valor, pois mostre a posição de cada valor
    //=============================================================
    printf("=== EXERCÍCIO 3===\n");

    int vetor3[10];
    
    for(int i = 0; i < 10; i++){
        printf("digite o %d número: ", i + 1);
        scanf("%d", &vetor3[i]);
    }

    int maior = vetor3[0];
    int menor = vetor3[0];
    int posMaior = 0;
    int posMenor = 0;

    for(int i = 1; i < 10; i++){

        printf("%d",  vetor3[i]);
        if(vetor3[i] > maior){
            maior = vetor3[i];
            posMaior = i;
        }  
        if(vetor3[i] < menor){
            menor = vetor3[i];
            posMenor = i;
        }
    }

    printf(" O Maior numero entrado foi %d e sua posição é %d\n", maior, posMaior);
    printf(" O Menor numero entrado foi %d e sua posição é %d\n\n", menor, posMenor);


//==================================
// 4 - Médias e notas positivas
//==============================
    printf("=== EXERCÍCIO 4===\n");

    float notas[6];
    float somaNotas = 0;
    float media = 0;
    int positivos = 0;


    for(int i = 0; i < 6; i++){
        printf("Digite sua &dº nota: ", i + 1);
        scanf("%d", &notas[i]);

        somaNotas += notas[i];

        if(notas[i] >= 10){
            positivos++;
        }
    }
    media = somaNotas / 6;

    printf("Médias = %2.f\n", media);
    printf("Total de notas positivas = %d\n\n", positivos);


//==============================
// 5 - Médias e notas positivas
//==============================
    printf("=== EXERCÍCIO 5===\n");

    int vetor4[10];
    int par;
    int impar;

    for(int i = 0; i < 10; i++){
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor4[i]);

        if(vetor4[i] % 2 == 0){
            par++;
        }
        else{
            impar++;
        } 
    }

    printf("Pares: %d\n", par);
    printf("Ímpares: %d\n", impar);



//==============================
// 6 - Pesquisa de um número
//==============================
    printf("=== EXERCÍCIO 6 ===\n");

    int vetor6[10];
    int numero;
    int encontrado;

    for(int i = 0; i < 10; i++){
        printf("Digite o %d número: ", i +1);
        scanf("%d", &vetor6[i]);
    }

    printf("Digite o número a procurar: ");
    scanf("%d", &numero);

    for(int i = 0; i < 10; i++){
        if(vetor6[i] == numero){
            printf("Numero encontrado na posição %d\n", i);
            encontrado = 1;
            break;
        }
    }
    
    if(!encontrado){
        printf("Número não encontrado.\n");
    }

    printf("\n");


//==============================
// 7 - Inversão do vetor
//==============================
    printf("=== EXERCÍCIO 7 ===\n");

    int vetor7[10];

    for(int i = 0; i < 10; i++){
        printf("digite o %dº número: ", i + 1);
        scanf("%d", &vetor7[i]);
    }

    printf("Vetor na ordem inversa:\n");

    for(int i = 9; i >= 0; i--){
        printf("%d", vetor7[i]);
    }

    printf("\n\n");
    return 0;
}