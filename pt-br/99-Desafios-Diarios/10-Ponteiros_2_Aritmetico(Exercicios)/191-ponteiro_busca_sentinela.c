/*Objetivo: Praticar o uso do while com alteração direta do ponteiro.
1. Crie um array de int: {5, 12, 7, 20, 42, -1}. O -1 será seu sentinela.
2. Crie um ponteiro p apontando para o início.
3. Use um loop while (*p != -1) que imprime o valor e depois faz p++.
4. Após o loop, imprima o endereço final onde o ponteiro parou (onde está o -1).*/

#include <stdio.h>

int main()
{

    int posicao = 0;
    int array[] = {5 , 12 , 7 , 20 , 42 , -1};

    int *p = &array[0];

    while (*p != -1)
    {
        printf("Valor na posicao[%d] do array: %d\n", posicao ,*p);
        p++;
        posicao++;
    }

    printf("Valor na posicao[%d] do array: %d\n", posicao ,*p);

    return 0;

}