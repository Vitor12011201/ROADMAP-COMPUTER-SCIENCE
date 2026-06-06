#include <stdio.h>

/* OBJETIVO: Demonstrar as diferentes formas de declarar variáveis com e sem sinal em C,
   incluindo as formas curtas (shorthand) permitidas pelo compilador. */

int main() {
    // Formas equivalentes para variáveis COM sinal (permitem negativos)
    int a = -10;
    signed int b = -20;

    // Formas equivalentes para variáveis SEM sinal (apenas zero e positivos)
    unsigned int c = 300;
    unsigned d = 400; // O compilador entende automaticamente como 'unsigned int'

    printf("Signed: a = %d, b = %d\n", a, b);
    printf("Unsigned: c = %u, d = %u\n", c, d);

    return 0;
}