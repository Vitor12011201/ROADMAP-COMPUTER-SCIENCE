#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Entender a diferença entre a memória automática (Stack) e a
memória manual (Heap). A Stack é rápida mas limitada; a Heap é vasta mas você manda nela. */

void funcao_exemplo() {
    // Memoria AUTOMATICA (Stack)
    // Esse 'x' desaparece assim que a função chegar na chave '}'
    int x = 10;
}

int main() {
    // Memoria MANUAL (Heap)
    // O ponteiro 'p' vive na stack, mas os dados para onde ele aponta
    // na Heap só morrem quando VOCÊ decidir.
    int *p = malloc(sizeof(int));

    free(p); // Importante: devolvendo a memória para o sistema
    return 0;
}