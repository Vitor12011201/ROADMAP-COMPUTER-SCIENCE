#include <stdio.h>

/**
 * Declaração Mista e Organizada
 * Objetivo: Mostrar como declarar múltiplos ponteiros e variáveis comuns
 * na mesma linha mantendo a clareza.
 */

int main() {
    // Declarando vários ao mesmo tempo:
    // a e c são ponteiros, b e d são apenas floats.
    float *a, b, *c, d;

    float nota = 9.5;

    a = &nota;  // Válido
    b = 7.0;    // Válido
    c = &b;     // Válido (ponteiro apontando para a variável comum b)
    d = 0.0;    // Válido

    printf("--- Valores e Enderecos ---\n");
    printf("Valor da nota: %.1f\n", *a);
    printf("Valor de b:    %.1f (acessado via *c: %.1f)\n", b, *c);
    printf("Valor de d:    %.1f\n", d);

    return 0;
}