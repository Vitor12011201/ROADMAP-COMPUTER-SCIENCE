#include <stdio.h>

/* OBJETIVO: Demonstrar a conversao implicita automatica (promocao).
   Quando um tipo menor operado junto com um tipo maior, o C promove
   o menor para o tamanho do maior sem perder nenhuma informacao. */

int main() {
    int x = 10;
    float y = 4.5f;

    // O 'x' (int) eh promovido implicitamente para 'float' antes da soma
    float resultado = x + y; // 10.0f + 4.5f

    printf("Resultado da promocao automatica: %f\n", resultado);
    printf("Tamanho da operacao na Stack: %zu bytes\n", sizeof(x + y));

    return 0;
}