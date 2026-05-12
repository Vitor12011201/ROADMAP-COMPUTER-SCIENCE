/* Objetivo: Fixar a sintaxe do calloc e verificar a inicialização zero
Escreva um programa que:
1. Aloque um array de 5 inteiros usando calloc(5, sizeof(int)).
2. Não preencha os valores manualmente.
3. Imprima os 5 valores do array usando um loop for (acesso por índice).
4. Observe e anote a saída (deve ser tudo 0).
5. Libere a memória com free.*/

#include <stdio.h>
#include <stdlib.h>


int main()
{

    int *array = calloc(5, sizeof(int));

    if (array == NULL)
    {
        fprintf(stderr,"Erro de memoria\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }

    free(array);

    array = NULL;

    return 0;

}