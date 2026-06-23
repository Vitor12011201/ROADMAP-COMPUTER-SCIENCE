#include <stdio.h>

/* OBJETIVO: Provar que constantes com ponto flutuante nascem como 'double' por padrão
   e demonstrar como usar os sufixos 'f' e 'L' para alterar esse comportamento na Stack. */

int main() {
    // Por que o tamanho de 3.14 puro é 8 bytes se um float tem 4? Porque ele nasce double!
    printf("Tamanho do literal '3.14' puro:     %zu bytes (Double!)\n", sizeof(3.14));

    // Usando o sufixo 'f' ou 'F', forçamos o literal a nascer como float de 4 bytes
    printf("Tamanho do literal '3.14f':         %zu bytes (Float!)\n", sizeof(3.14f));

    // Usando o sufixo 'l' ou 'L', forçamos a precisão máxima do Long Double
    printf("Tamanho do literal '3.14L':         %zu bytes (Long Double!)\n", sizeof(3.14L));

    return 0;
}