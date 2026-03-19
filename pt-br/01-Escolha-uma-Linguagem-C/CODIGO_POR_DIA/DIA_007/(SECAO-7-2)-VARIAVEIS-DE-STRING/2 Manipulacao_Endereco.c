#include <stdio.h>

/*
 * Objetivo: Provar que o %s imprime a partir do endereco fornecido.
 */
int main() {
    char *s = "Programacao";

    // Imprime a string inteira
    printf("Completa: %s\n", s);

    // Passamos o endereco da 4ª letra (índice 3)
    // O printf vai ler a partir dali ate encontrar o \0
    printf("Cortada:   %s\n", s + 3); // Vai imprimir "gramacao"

    return 0;
}