#include <stdio.h>
# define TAM 3

int main() {
    // Create a program that reads the grades od 10 students into an array

    float notas[TAM];


    for(int i = 0; i < TAM; i++){
        do
        {
            printf("Enter a number %d: ", i + 1);
            scanf("%f", &notas[i]);
            if(notas[i] < 0 || notas[i] > 20){
                printf("\n____INVALID NUMBER___\n\n");
            }

        
        } while (!(notas[i] >= 0 && notas[i] <= 20));
        
    }

    // All the notes entered
    printf("\n");
    for(int i = 0; i < TAM; i++){
        printf("%.2f\n", notas[i]);
    }

    // Class average
    float media; 
    float soma = 0;

    for(int i = 0; i < TAM; i++){
        soma+=notas[i];
    }
    media = soma / TAM;
    printf("\nA média é %.2f\n", media);
    
    // Highest score

    float maior = notas[0];
    float menor = notas[0];
    
    for(int i = 0; i < TAM; i++){
        if(notas[i] > maior){
            maior = notas[i];
        }
        if(notas[i] < menor){
            menor = notas[i];
        }
    }

    printf("A maior nota é %.2f\n", maior);
    printf("A menor nota é %.2f\n", menor);


    return 0;
}