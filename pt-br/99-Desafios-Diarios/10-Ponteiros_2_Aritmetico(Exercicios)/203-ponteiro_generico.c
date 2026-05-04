/*Objetivo: Praticar a conversão de void * para tipos específicos antes de usar.
1. Crie uma variável int n = 10; e uma char c = 'A';.
2. Crie uma função void imprimir_generico(void *ptr, char tipo).
3. Se o tipo for 'i', a função deve converter o ponteiro para int* e imprimir o valor.
4. Se o tipo for 'c', deve converter para char* e imprimir o caractere.
5. No main, chame a função para as duas variáveis.*/

#include <stdio.h>

int n = 10;

char c = 'A';

void imprimir_generico(void *ptr, char tipo)
{
    if (tipo == 'i')
    {
        printf("ptr Int: %d\n", *(int *)ptr);
    }
    else if (tipo == 'c')
    {
        printf("ptr Char: %c\n", *(char *)ptr);
    }
}

int main()
{

    imprimir_generico(&n , 'i');

    imprimir_generico(&c, 'c');

    return 0;

}