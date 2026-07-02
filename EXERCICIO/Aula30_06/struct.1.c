/*2-Cria uma struct Aluno com:
int numero; int idade; float nota;
O programa deve:
- ler os dados de um aluno;
- mostrar os dados;
- indicar se está aprovado ou reprovado.
Considera aprovado quem tiver nota maior ou
igual a 10.*/


#include <stdio.h>

struct Aluno
{
    int numero;
    int idade;
    float nota;
};

int main(){

    struct Aluno aluno;

    printf("Digite seu número: ");
    scanf("%d", &aluno.numero);

    printf("Digite sua idade: ");
    scanf("%d", &aluno.idade);

    printf("Digite sua nota: ");
    scanf("%f", &aluno.nota);

    if(aluno.nota >= 10){
        printf("Aprovado!!!");
    }else{
        printf("Reprovado!!!");
    }

    return 0;
}



