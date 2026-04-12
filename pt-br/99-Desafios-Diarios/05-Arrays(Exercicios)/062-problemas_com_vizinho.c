/* Objetivo: Observar o "lixo de memória" na prática.
1. Declare um array int a[3] = {11, 22, 33};.
2. Tente imprimir o índice 3 e o índice 4.
3. Como o array só vai até o índice 2, o que aparecerá são valores que estavam "sobrando" na memória RAM.
Anote que valores bizarros apareceram.*/

#include <stdio.h>

int main()
{
    int array[3] = {11, 22, 33};
    printf("%d\n", array[3]);
    printf("%d\n", array[4]);
}
