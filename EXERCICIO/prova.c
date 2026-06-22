// Um Utilizador vai introduzir várias temperaturas registradas  durante o dia.
// O número de temperatura é desconhecido. A introdução termina quando  for escrito 999.
// No final apresenta:
// Quantas temperaturas foram introduzidas;
// A maior e a menor temperatura registrada;
// Média das temperaturas;
// Quantas temperaturas ficaram abaixo de 10 graus;

#include <stdio.h>

int main(){
    float temp, maior , menor, media, soma = 0;
    int contador = 0, abaixo10 = 0;
    
    do
    {
        printf("Digite a temperatura: ");
        scanf("%f",&temp);
        if(temp != 999){
            // primeiro validar a temperatura
            if(contador == 0){
                maior = temp;
                menor = temp;
            }
            
            contador ++;
            soma += temp;
            media = soma / contador;



            if (temp > maior){
            maior = temp;
            }

            if (temp < menor){
                menor = temp;
            }
        }

        if(temp < 10){
            abaixo10++;
        }
        
    } while (temp != 999);

    printf("Foram inseridas %d temperaturas\n", contador);
    
    printf("A maior temperatura foi %.1f\n", maior);
    printf("A menor temperatura foi %.1f\n", menor);
    printf("A média das temperatura é %.1f\n", media);
    printf("%d ficaram abaixo de 10℃", abaixo10);
    
    
    
    return 0;
}