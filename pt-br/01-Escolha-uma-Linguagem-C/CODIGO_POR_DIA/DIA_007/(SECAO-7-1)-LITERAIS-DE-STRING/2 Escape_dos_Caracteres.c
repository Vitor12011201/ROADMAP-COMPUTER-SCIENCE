#include <stdio.h>

/*
 * Objetivo: Demonstrar como imprimir aspas duplas e quebras de linha.
 */
int main() {
    // Usamos \" para que o compilador nao ache que a string acabou ali
    char frase[] = "Ele disse: \"O C eh sensacional!\"\nE eu concordei.";

    printf("--- Texto Formatado ---\n");
    printf("%s\n", frase);

    return 0;
}