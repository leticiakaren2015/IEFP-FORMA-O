#include <stdio.h>
# define TAM 10

int main() {
    // Create a program that reads the grades od 10 students into an array

    float notas[TAM];


    for(int i = 0; i < TAM; i++){
        do
        {
            printf("Enter a number %d: ", i + 1);
            scanf("%f", &notas[i]);
        } while (!(notas[i] >= 0 && notas[i] <= 20));
        
    }
    
    
    return 0;
}