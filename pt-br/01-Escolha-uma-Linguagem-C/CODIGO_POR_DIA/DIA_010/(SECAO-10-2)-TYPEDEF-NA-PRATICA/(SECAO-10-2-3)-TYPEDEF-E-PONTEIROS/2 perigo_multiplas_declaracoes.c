#include <stdio.h>

/* OBJETIVO: Mostrar a diferença entre a declaração comum e com typedef.
   O typedef garante que TODAS as variáveis da linha sejam ponteiros,
   diferente da declaração padrão do C que pode confundir. */

typedef int* IntPtr;

int main() {
    // No C padrão, apenas 'a' seria ponteiro, 'b' seria um int comum:
    // int *a, b;

    // Com typedef, tanto 'p1' quanto 'p2' SÃO ponteiros:
    IntPtr p1, p2;

    int x = 10, y = 20;
    p1 = &x;
    p2 = &y;

    printf("P1: %d, P2: %d\n", *p1, *p2);
    return 0;
}