/* Objetivo: Praticar o uso do realloc() para aumentar o tamanho de um bloco de memória manualmente.
1. Aloque dinamicamente um array para 2 inteiros usando malloc. Preencha com os números 10 e 20.
2. Use o realloc() para expandir esse mesmo array para que ele consiga guardar 4 inteiros.
3. Adicione os números 30 e 40 nas novas posições.
4. Imprima os 4 números para garantir que o realloc manteve os dados originais intactos.
5. Não esqueça do free().*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int capacidade = 2;
    int nova_capacidade = 4;
    int *p = malloc(sizeof(int) * capacidade);
    memset(p,0, capacidade * sizeof(int));

    if (p == NULL)
    {
        fprintf(stderr, "Erro de memoria\n");
        return 1;
    }

    for (int i = 0; i < capacidade; i++)
    {
        p[i] = 10 * (i + 1);
    }

    int *novo_p = realloc(p, sizeof(int) * nova_capacidade);

    if (novo_p == NULL)
    {
        fprintf(stderr,"Erro ao realocar memoria\n");
        return 1;
    }

    p = novo_p;

    for (int i = 2; i < nova_capacidade; i++)
    {
        p[i] = 10 * (i + 1);
    }

    for (int i = 0; i < nova_capacidade; i++)
    {
        printf("p[%d] = %d\n",i, p[i]);
    }

    free(p);

    p = NULL;

    return 0;

}