// EXERCÍCIOS
//
// Cria um programa que execute as seguintes operações sobre vetores, de forma sequencial:
//
// 1 - Leitura e apresentação de valores
// Lê 10 números inteiros para um vetor.
// Mostra todos os valores introduzidos.
//
// 2 - Soma dos elementos
// Lê 8 números inteiros para um segundo vetor.
// Calcula e apresenta a soma de todos os elementos.
//
// 3 - Maior e menor valor
// Lê 10 números inteiros para um terceiro vetor.
// Determina e apresenta:
//     - o maior valor;
//     - o menor valor;
//     - a posição onde aparece o maior;
//     - a posição onde aparece o menor.
//
// 4 - Média e notas positivas
// Lê 6 notas (valores reais ou inteiros) para um vetor.
// Calcula e apresenta a média das notas.
// Indica também quantas notas são positivas (>= 10).
//
// 5 - Contagem de pares e ímpares
// Lê 12 números inteiros para um vetor.
// Indica quantos valores são pares e quantos são ímpares.
//
// 6 - Pesquisa de um número
// Lê 10 números inteiros para um vetor.
// Pede ao utilizador um número a procurar.
// Indica se o número existe no vetor e, caso exista, em que posição aparece.
//
// 7 - Inversão do vetor
// Lê 10 números inteiros para um vetor.
// Mostra o vetor pela ordem inversa.





#include <stdio.h>

int main(){

/*    int vet1[10];
    

// 1 - Leitura e apresentação de valores
// Lê 10 números inteiros para um vetor.
// Mostra todos os valores introduzidos.

// read values 1
    for(int i = 0; i < 10; i++){
        printf("Digite um número %dº: ", i + 1);
        scanf("%d", &vet1[i]);
    }
    

// print values 1
    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", vet1[i]);
    }
    

    // 2 - Soma dos elementos
// Lê 8 números inteiros para um segundo vetor.
// Calcula e apresenta a soma de todos os elementos.

    // read values 2
    int vet2[8];

    printf("\n\n");
    for(int i = 0; i < 8; i++){
        printf("Digite um número %dº: ", i + 1);
        scanf("%d", &vet2[i]);
    }


// print values 2 
    int soma = 0;  
    for(int i = 0; i < 8; i++){
        soma+= vet2[i]; 
    }
    printf("\nO total da soma é %d", soma);
*/

// 3 - Maior e menor valor
// Lê 10 números inteiros para um terceiro vetor.
// Determina e apresenta:
//     - o maior valor;
//     - o menor valor;
//     - a posição onde aparece o maior;
//     - a posição onde aparece o menor.

    int vet3[10];
    
// CRIANDO UM VETOR
    for(int i = 0; i < 10; i++){
        printf("Digite um número %dº: ", i + 1 );
        scanf("%d", &vet3[i]);
    }
    printf("\n\n");
// VISUALIZANDO O VETOR
    for(int i = 0; i < 10; i++){
        printf("%d ", vet3[i]);
    }
    printf("\n\n");


// MOSTRANDO O MAIR NÚMERO DO VETOR E SUA POSIÇÃO
    int maior = vet3[0];
    int posmaior = 0;
    for(int i = 0; i < 10; i++){
        if(vet3[i] > maior){
            maior = vet3[i];
            posmaior = i;
            
        }
    }

// MOSTRANDO O MAIR NÚMERO DO VETOR E SUA POSIÇÃO
    int menor = vet3[0];
    int posmenor = 0;
    for(int i = 0; i < 10; i++){
        if(vet3[i] < menor){
            menor = vet3[i];
            posmenor = i;
            }
        }
    
// MOSTRANDO VALORES   
    printf("\nO número Maior é %d e esta na %dº posição.\n", maior, posmaior + 1);
    printf("\n O número Menor é %d e esta na %dº posição.\n", menor, posmenor + 1);





    return 0;
}