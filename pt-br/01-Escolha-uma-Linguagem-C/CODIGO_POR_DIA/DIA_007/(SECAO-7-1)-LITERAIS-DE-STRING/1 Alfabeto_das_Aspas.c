#include <stdio.h>

/*
 * Caractere vs String Literal
 * Objetivo: Mostrar que 'A' ocupa 1 byte e "A" ocupa 2 bytes (devido ao \0).
 */
int main() {
    char letra = 'A';          // Aspas simples = um unico caractere
    char string_curta[] = "A"; // Aspas duplas = string literal (array)

    printf("Caractere: %c (Tamanho: %zu byte)\n", letra, sizeof(letra));
    printf("String:    %s (Tamanho: %zu bytes - inclui o \\0)\n", string_curta, sizeof(string_curta));

    return 0;
}