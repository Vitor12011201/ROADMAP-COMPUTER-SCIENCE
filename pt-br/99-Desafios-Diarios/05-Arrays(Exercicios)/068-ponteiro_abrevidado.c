/* Objetivo: Praticar a sintaxe simplificada dos ponteiros
1. Declare um array int valores[3] = {100, 200, 300};.
2. Declare um ponteiro de inteiro int *ptr;.
3. Em vez de usar &valores[0], use o atalho: ptr = valores;.
4. Imprima o valor apontado por ptr usando o operador *. */

#include <stdio.h>

int main()
{
    int valores[3] = {100, 200, 300};
    int* ptr = valores;
    printf("Mostras que valores[] == Ao primeiro elemento do primeiro endereco do Array, que no caso e o : [%d]\n",
           *valores);
}
