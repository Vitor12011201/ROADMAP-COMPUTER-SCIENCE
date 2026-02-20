#include <stdio.h>

int main() {
    int x;

    // O C resolve o 1, depois o 2, e por fim o 3.
    // O valor 3 é o que "vence" e entra no x.
    x = (1, 2, 3);

    printf("x e igual a: %d\n", x); // Vai imprimir 3

    return 0;
}