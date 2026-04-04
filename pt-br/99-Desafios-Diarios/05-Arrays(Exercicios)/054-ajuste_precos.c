/* Crie um programa que:
Declare um array de float com tamanho 4.
Use um loop for para pedir que o usuário digite 4 preços de produtos.
Após a leitura, use outro loop for para imprimir esses preços, mas com um detalhe: aplique um aumento de 10% no valor de cada um na hora de imprimir.*/

#include <stdio.h>

int main()
{
    float preco[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Digite o valor do produto numero [%d]: \n", i + 1);
        scanf("%f", &preco[i]);
    }
    printf("Os valores dos Produtos digitados +10 porcendo do valor foram: \n");
    for (int i = 0; i < 4; i++)
    {
        preco[i] *= 1.10;
        printf("%.2f\n", preco[i]);
    }
}
