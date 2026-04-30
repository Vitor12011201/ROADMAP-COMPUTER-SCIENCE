/*Objetivo: Acumular valores enquanto altera a posição do ponteiro.
1. Crie um array de float com 4 notas e termine com um valor negativo (ex: -1.0) como sentinela.
2. Crie um ponteiro ptr.
3. Use um loop para somar todas as notas em uma variável soma.
Atenção: Dentro do loop, você deve usar soma += *ptr; e depois ptr++;.
4. No final, imprima a média das notas.*/

#include <stdio.h>

int main()
{
    int posicao = 0;
    float array[] = {3.4 , 5.7 , 8.3 , 7.4, -1.0};
    float *ptr = &array[0];
    float soma = 0.0;

    while (*ptr != -1.0)
    {
        printf("Nota [%d]: %.2f\n", posicao + 1, *ptr);
        posicao++;
        soma += *ptr;
        ptr++;
    }

    printf("A media das suas notas e: %.2f\n", soma/posicao);

    return 0;
}