#include <stdio.h>

/* OBJETIVO: Demonstrar que acessar um array por índice ou por soma de ponteiro
   resulta exatamente no mesmo código de máquina. */

int main() {
    int a[5] = {11, 22, 33, 44, 55};
    int *p = a;

    // Acessando o terceiro elemento (índice 2) de duas formas:
    printf("Via array: %d\n", a[2]);
    printf("Via ponteiro: %d\n", *(p + 2));

    return 0;
}