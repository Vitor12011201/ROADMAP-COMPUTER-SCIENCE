#include <stdio.h>
#include <stdlib.h> // Necessário para a função atoi()

/* OBJETIVO: Demonstrar a conversão básica de uma string puramente numérica
   para um tipo 'int' usando a função rápida 'atoi' (Ascii To Integer). */

int main() {
    char texto_numero[] = "2026";

    // Convertendo o texto bruto para um inteiro real na RAM
    int ano_atual = atoi(texto_numero);

    // Provando a conversão ao realizar uma operação matemática básica
    int anos_passados = ano_atual - 2000;

    printf("Texto original:   \"%s\"\n", texto_numero);
    printf("Número convertido: %d\n", ano_atual);
    printf("Anos passados:     %d\n", anos_passados);

    return 0;
}