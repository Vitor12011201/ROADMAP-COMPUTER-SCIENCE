/* Objetivo: Fixar a sintaxe de verificação de retorno NULL após malloc para um único bloco
Escreva um programa que:
1. Declare um ponteiro int *p.
2. Aloque dinamicamente memória para um único inteiro usando malloc(sizeof(int)).
3. Verifique se o ponteiro é NULL após a alocação. Se for, imprima a mensagem "Falha crítica: memória insuficiente.\n" e encerre o programa com return 1.
4. Caso contrário, atribua o valor 42 ao inteiro alocado, imprima esse valor e libere a memória com free.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *p;

    p = malloc(sizeof(int));

    if (p == NULL)
    {
        fprintf(stderr, "Falha crítica: memória insuficiente.\n");
        return 1;
    }

    *p = 42;

    printf("O valor dentro de *p e: %d\n", *p);

    free(p);

    p = NULL;

    return 0;

}