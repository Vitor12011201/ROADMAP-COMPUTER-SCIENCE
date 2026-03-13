#include <stdio.h>

/*
 * Mostra que 'a' e '&a[0]' sao identicos para o compilador.
 */
int main() {
    int v[3] = {10, 20, 30};
    int *p;

    // Forma 1: Explicita
    p = &v[0];
    printf("Via &v[0]: %d\n", *p);

    // Forma 2: O jeito C de ser (Atalho)
    p = v;
    printf("Via nome do array (v): %d\n", *p);

    return 0;
}