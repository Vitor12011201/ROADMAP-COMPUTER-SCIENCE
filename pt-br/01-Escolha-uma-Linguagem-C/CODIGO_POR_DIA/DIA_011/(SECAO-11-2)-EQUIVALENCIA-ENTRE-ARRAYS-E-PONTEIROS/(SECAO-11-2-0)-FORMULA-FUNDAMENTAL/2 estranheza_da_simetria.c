#include <stdio.h>

/* OBJETIVO: Mostrar que, devido à fórmula ser uma soma (a+i é o mesmo que i+a), a sintaxe i[a] tecnicamente funciona em C,
embora seja considerada uma péssima prática. */

int main() {
    int a[] = {10, 20, 30};

    // Se a[1] == *(a + 1), então 1[a] == *(1 + a)
    // Funciona, mas NÃO use isso em produção! É apenas para entender a matemática.
    printf("Elemento no índice 1: %d\n", 1[a]);

    return 0;
}