/* Crie um programa que:
Declare um array de double com os valores {1.1, 2.2, 3.3, 4.4, 5.5, 6.6}.
Crie uma variável int tamanho que calcula o comprimento do array usando a fórmula: sizeof(array) / sizeof(double).
Use essa variável tamanho para imprimir todos os elementos. */

#include <stdio.h>

int main()
{
    double array[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
    int tamanho = sizeof(array) / sizeof(double);
    printf("O tamanho da variavel array e [%d]\n", tamanho);
    printf("====================================\n");
    printf("Os numeros do Array sao: \n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%.1f\n", array[i]);
    }
}
