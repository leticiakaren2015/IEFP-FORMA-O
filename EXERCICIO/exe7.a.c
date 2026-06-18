//Mostre todos os múltiplos de 3 entre 1 e 100. 

#include<stdio.h>

int main(){
    int num1, num2, menor;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite um número: ");
    scanf("%d", &num2);

    if(num1 > num2){      
        menor= num1;
        num1 = num2;
        num2 = menor;
    }


    for(int i = num1; i <= num2; i++){
        if (i % 3 == 0){
            printf("%d ", i);
        }
    }
    printf("\nFIM DO PROGRAMA!");
    return 0;
}
