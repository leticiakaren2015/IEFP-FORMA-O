//Mostre todos os múltiplos de 3 entre 1 e 100.

#include<stdio.h>

int main(){
    for(int i = 0; i < 101; i+= 3){
        printf("%d ",i);
    }
    return 0;
}