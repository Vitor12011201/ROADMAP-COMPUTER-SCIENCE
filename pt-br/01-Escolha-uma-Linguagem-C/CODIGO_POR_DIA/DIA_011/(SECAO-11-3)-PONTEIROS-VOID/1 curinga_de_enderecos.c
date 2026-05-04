#include <stdio.h>

/* OBJETIVO: Demonstrar que um void* pode apontar para qualquer tipo de dado sem gerar avisos do compilador,
   servindo como um recipiente genérico. */

int main() {
    int n = 10;
    float f = 3.14;
    char c = 'Z';

    void *ptr; // Ponteiro genérico

    ptr = &n; // OK
    printf("Apontando para int: %p\n", ptr);

    ptr = &f; // OK
    printf("Apontando para float: %p\n", ptr);

    ptr = &c; // OK
    printf("Apontando para char: %p\n", ptr);

    return 0;
}