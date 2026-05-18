/* Objetivo: Fixar a equivalência entre realloc(NULL, tamanho) e malloc(tamanho)
Escreva um programa que demonstre a equivalência entre malloc e realloc com ponteiro NULL:
1. Declare um ponteiro int *p inicializado como NULL.
2. Use realloc(p, 5 * sizeof(int)) para alocar espaço para 5 inteiros.
3. Preencha o array com os valores 2, 4, 6, 8, 10.
4. Imprima todos os valores.
5. Libere a memória com free(p). */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *p = NULL;

    int *novo_p = realloc(p, 5 * sizeof(int));

    if (novo_p == NULL)
    {
        fprintf(stderr, "Erro ao alocar memoria\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        novo_p[i] = (i + 1) * 2;
        printf("%d\n", novo_p[i]);
    }


    p = novo_p;

    free(p);

    p = NULL;

    return 0;

}