#include <stdio.h>

/*
 * Objetivo: Usar um loop para imprimir letra por letra usando indices.
 */
int main() {
    char s[] = "C e Vida!";

    // Percorremos ate encontrar o '\0' (terminador nulo)
    for (int i = 0; s[i] != '\0'; i++) {
        printf("Caractere no indice %d: %c\n", i, s[i]);
    }

    return 0;
}