#include <stdio.h>

/* OBJETIVO: Demonstrar que as quatro formas de acessar um dado (array/ponteiro com notação de colchetes/asterisco) são absolutamente idênticas para o compilador. */

int main() {
    int a[] = {11, 22, 33, 44, 55};
    int *p = a;
    int i = 2; // Queremos o valor 33

    printf("Notação de array em a: %d\n", a[i]);
    printf("Notação de array em p: %d\n", p[i]);
    printf("Aritmética de ponteiro em a: %d\n", *(a + i));
    printf("Aritmética de ponteiro em p: %d\n", *(p + i));

    return 0;
}