/* Objetivo: Aplicar calloc e comparar com malloc seguido de memset, demonstrando a praticidade do calloc
Implemente um programa que
1. Pergunte ao usuário quantos double ele deseja armazenar (valor positivo; caso contrário, exiba erro e encerre).
2. Aloque dois arrays do mesmo tamanho:
 - arr_calloc usando calloc(tamanho, sizeof(double)).
 - arr_malloc usando malloc(tamanho * sizeof(double)) e depois zere explicitamente com memset(arr_malloc, 0, tamanho * sizeof(double)).
3. Preencha ambos os arrays com os valores: (i+1) * 0.5 (índice 0 → 0.5, índice 1 → 1.0, etc.).
4. Imprima os primeiros 3 elementos de cada array para verificar se estão iguais.
5. Libere ambos os arrays.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int resposta_usuario = 0;

    printf("quantos double voce deseja armazenar: \n");
    scanf("%d", &resposta_usuario);

    if (resposta_usuario <= 0)
    {
        fprintf(stderr,"O numero digitado e zero ou negativo\n");
        return 1;
    }

    double *arr_calloc = calloc(resposta_usuario, sizeof(double));

    double *arr_malloc = malloc(resposta_usuario * sizeof(double));
    memset(arr_malloc, 0, resposta_usuario * sizeof(double));

    if (arr_calloc == NULL || arr_malloc == NULL)
    {
        fprintf(stderr,"Erro de memoria\n");

        free(arr_calloc);

        free(arr_malloc);

        return 1;

    }

    for (int i = 0; i < resposta_usuario; i++)
    {
        arr_calloc[i] = (i + 1) * 0.5;
        arr_malloc[i] = (i + 1) * 0.5;
        if (i < 3)
        {
            printf("calloc[%d] = %.2lf \n", i , arr_calloc[i]);
            printf("malloc[%d] = %.2lf \n", i , arr_malloc[i]);
            printf("\n");
        }

    }

    free(arr_calloc);
    free(arr_malloc);

    arr_calloc = NULL;
    arr_malloc = NULL;

    return 0;

}