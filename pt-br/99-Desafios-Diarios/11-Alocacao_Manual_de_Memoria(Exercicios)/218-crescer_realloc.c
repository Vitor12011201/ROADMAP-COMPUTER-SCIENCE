/* Objetivo: Fixar a sintaxe do realloc para aumentar o tamanho de um array alocado dinamicamente
Escreva um programa que:
1. Aloque um array de 3 inteiros usando malloc.
2. Preencha com os valores 10, 20, 30.
3. Use realloc para aumentar o array para 5 inteiros.
4. Preencha os dois novos elementos (índices 3 e 4) com 40 e 50.
5. Imprima todos os 5 valores.
6. Libere a memória com free. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int *p = malloc(sizeof(int) * 3);
    memset(p, 0, 3 * sizeof(int));

    if (p == NULL)
    {
        fprintf(stderr, "Erro de memoria\n");
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        p[i] = (i + 1) * 10;
        printf("Valor da variavel posicao[%d]: %d\n", i , p[i]);
    }

    int *novo_p = realloc(p, sizeof(int) * 5);

    if (novo_p == NULL)
    {
        fprintf(stderr, "Erro ao realocar memoria\n");
        return 1;
    }

    p = novo_p;

    for (int i = 3; i < 5; i++)
    {
        p[i] = (i + 1) * 10;
        printf("Valor da variavel posicao[%d]: %d\n", i, p[i]);
    }

    free(p);

    p = NULL;

    novo_p = NULL;

    return 0;
}