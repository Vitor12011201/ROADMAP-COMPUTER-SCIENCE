#include <stdio.h>
#include <limits.h> // Biblioteca que contém as macros de limites

/* OBJETIVO: Imprimir os limites reais de tamanho e valor do 'short' e do 'int'
   no seu sistema atual, usando as macros portáveis do C. */

int main() {
    // Exibindo tamanhos em bytes e limites do 'short' (geralmente 2 bytes)
    printf("SHORT: %zu bytes | Min: %d | Max: %d\n",
            sizeof(short), SHRT_MIN, SHRT_MAX);

    // Exibindo tamanhos em bytes e limites do 'int' (geralmente 4 bytes)
    printf("INT:   %zu bytes | Min: %d | Max: %d\n",
            sizeof(int), INT_MIN, INT_MAX);

    return 0;
}