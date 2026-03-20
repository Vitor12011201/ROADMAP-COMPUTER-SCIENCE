#include <stdio.h>

/*
 * Objetivo: Alterar caracteres especificos de um array de char.
 */
int main() {
    char saudacao[] = "ola";

    // Mudando 'o' para 'O' e 'l' para 'L' via indice
    saudacao[0] = 'O';
    saudacao[1] = 'L';
    saudacao[2] = 'A';

    printf("String modificada: %s\n", saudacao); // Imprime "OLA"

    return 0;
}