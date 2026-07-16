#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int n1;
    printf("Digite um numero ente 0 e 5: ");
    scanf("%d", &n1);



    int  n2= rand() % 5 + 1; // gera ete 0 e 10;
    printf("Eu pensei no \"número\" (%d)",n2);

    return 0;
}


