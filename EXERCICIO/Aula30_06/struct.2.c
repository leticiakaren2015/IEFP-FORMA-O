/*3-Cria uma struct Produto com:
int codigo; float preço; int quantidade;
O programa deve:
- ler os dados de um produto;
- calcular o valor total em stock.
Fórmula: valorTotal = preço * quantidade;*/

#include <stdio.h>

struct Produto 
{
    int codigo;
    float preco;
    int quantidade;
};

int main(){

    
    struct Produto produto;
    int total;

    printf("Digite o codigo: ");
    scanf("%d", &produto.codigo);

    printf("Didite o preço: ");
    scanf("%f", &produto.preco);

    printf("Digite a quantidade: ");
    scanf("%d", &produto.quantidade);

    total = produto.preco * produto.quantidade;

    printf("O valor total em estoque é %d", total);








    return 0;
}