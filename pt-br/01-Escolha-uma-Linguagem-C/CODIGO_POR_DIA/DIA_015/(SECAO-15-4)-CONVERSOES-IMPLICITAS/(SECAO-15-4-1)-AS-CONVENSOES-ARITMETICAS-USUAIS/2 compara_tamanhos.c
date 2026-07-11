/* Objetivo: Usar o sizeof para capturar o tipo resultante de uma operação matemática misturando inteiros de tamanhos diferentes.
Instruções:
1. Declare um int x = 10; e um long long int y = 20LL;.
2. Imprima o tamanho em bytes do resultado da operação usando sizeof(x + y).
3. Imprima também o tamanho do resultado de sizeof(x + 4.5f). */

#include <stdio.h>

int main()
{
    int x = 10;
    long long int y = 20LL;
    printf("Tamanho de x + y: %zu bytes\n", sizeof(x + y));
    printf("Tamanho de x + 4.5f: %zu bytes\n", sizeof(x + 4.5f));

    return 0;
}