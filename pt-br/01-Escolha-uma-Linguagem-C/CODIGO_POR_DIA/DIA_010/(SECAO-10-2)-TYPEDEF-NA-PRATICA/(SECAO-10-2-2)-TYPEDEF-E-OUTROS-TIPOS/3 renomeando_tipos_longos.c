#include <stdio.h>

/* OBJETIVO: Encurtar tipos que possuem nomes muito longos no C.
   Isso evita erros de digitação e limpa visualmente o código. */

typedef unsigned long long u64; // Apelido comum para inteiros de 64 bits sem sinal

int main() {
    // Em vez de escrever 'unsigned long long' toda vez:
    u64 populacao_mundial = 8000000000ULL;

    printf("População estimada: %llu\n", populacao_mundial);
    return 0;
}