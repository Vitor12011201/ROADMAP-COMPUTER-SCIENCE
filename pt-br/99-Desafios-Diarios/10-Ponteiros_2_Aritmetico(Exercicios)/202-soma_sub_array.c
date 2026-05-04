/*Objetivo: Usar a aritmética de ponteiros para fazer uma função processar apenas uma parte do array.
1. Crie uma função int soma_elementos(int *p, int qtd) que soma os elementos usando um loop.
2. No main, crie um array int dados[] = {1, 2, 3, 10, 20, 30};.
3. Use a aritmética de ponteiros para chamar a função e somar apenas os últimos 3 números (10, 20, 30).*/

#include <stdio.h>

int soma_elementos(int *p, int qtd)
{
    int soma = 0;

    for (int i = 0; i < qtd; i++)
    {
        soma += *(p + i);
    }

    return soma;
}

int main()
{
    int dados[] = {1, 2, 3, 10, 20, 30};

    int resultado = soma_elementos(dados + 3, 3);

    printf("A soma dos 3 ultimos elementos do array: %d", resultado);

    return 0;

}
