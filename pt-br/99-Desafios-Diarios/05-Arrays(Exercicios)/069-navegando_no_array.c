/* Objetivo: Ver como o ponteiro "anda" pela memória do array.
1. Declare int nums[4] = {10, 20, 30, 40};.
2. Crie um ponteiro int *p = nums;.
3. Imprima o valor de *p.
4. Agora, use o comando p++; (isso move o ponteiro para o próximo inteiro na memória).
5. Imprima *p novamente. O que aconteceu?
6. Repita o p++; e imprima de novo.*/

#include <stdio.h>

int main()
{
    int numeros[4] = {10, 20, 30, 40};
    int* ptr = numeros;
    printf("O valor que esta na posicao [0]: %d\n", *ptr);
    ptr++;
    printf("O valor que esta na posicao [1]: %d\n", *ptr);
    ptr++;
    printf("O valor que esta na posicao [2]: %d\n", *ptr);
}
