/*Objetivo: Provar que, se você tem o ponteiro, você manda no array.
Crie um array int dados[3] = {1, 2, 3};.
Crie um ponteiro int *manipulador = dados;.
Sem usar o nome dados, mude o primeiro valor para 99 usando o ponteiro.
"Mova" o ponteiro para a segunda posição (manipulador++) e mude o valor para 88.
No final, use um loop for normal no main para imprimir o array dados e veja se os valores realmente mudaram.*/

#include <stdio.h>

int main()
{
    int dados[3] = {1, 2, 3};
    printf("O Array antes da manipulacao: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", dados[i]);
    }
    int* manipulador = dados;
    *manipulador = 99;
    manipulador++;
    *manipulador = 88;
    printf("================================\n");
    printf("O Array apos a manipulacao e: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", dados[i]);
    }
}
