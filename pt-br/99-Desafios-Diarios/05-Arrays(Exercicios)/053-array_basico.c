/* Crie um programa que:
Declare um array de inteiros (int) com tamanho 5.
Atribua manualmente os valores 10, 20, 30, 40 e 50 para as posições de 0 a 4.
Imprima apenas o primeiro, o terceiro (índice 2) e o último valor do array. */

#include <stdio.h>

int main() {

    int array[5] = {10, 20, 30, 40, 50};

    printf("O primeiro numero do Array e [%d], O terceiro numero do Array e [%d], O quinto numero do Array e [%d]\n", array[0], array [2], array[4]);
}