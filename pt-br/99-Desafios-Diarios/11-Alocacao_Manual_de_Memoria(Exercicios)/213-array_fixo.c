/* Objetivo: Fixar a sintaxe de alocação de um array de tamanho fixo usando malloc, preenchimento e liberação
Escreva um programa que:
1. Aloque dinamicamente um array de 8 números do tipo float usando malloc.
2. Utilize a quantidade correta de bytes: sizeof(float) * 8.
3. Preencha o array com os valores: 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5.
4. Imprima todos os valores usando notação de índice (vetor[i]).
5. Libere a memória ao final.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float *p = malloc(sizeof(float) * 8);

    if (p == NULL)
    {
        fprintf(stderr, "Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < 8; i++)
    {
        p[i] = i + 1.5;
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%.2f\n", p[i]);
    }

    free(p);

    p = NULL;

    return 0;

}