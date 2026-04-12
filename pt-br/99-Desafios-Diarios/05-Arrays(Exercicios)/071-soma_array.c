/* Objetivo: Criar uma função que recebe um array e seu tamanho.
1. Escreva uma função int somar_tudo(int *a, int comprimento) que percorre o array e retorna a soma de todos os elementos.
2. No main, crie um array com 4 valores: {5, 10, 15, 20}.
3. Chame a função passando o array e o número 4, e imprima o resultado da soma.*/

#include <stdio.h>

int somar_array(int* a, int comprimento)
{
    int soma = 0;
    for (int i = 0; i < comprimento; i++)
    {
        soma = soma + a[i];
    }
    return soma;
}

int main()
{
    int array[4] = {5, 10, 15, 20};
    int soma = somar_array(array, 4);
    printf("A soma de todos os elementos do Array e: [%d]\n", soma);
}
