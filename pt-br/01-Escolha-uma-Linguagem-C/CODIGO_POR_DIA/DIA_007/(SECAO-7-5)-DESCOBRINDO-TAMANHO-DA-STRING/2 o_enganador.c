#include <stdio.h>
#include <string.h>

/*
 * Objetivo: Provar que o strlen para no primeiro '\0' que encontrar.
 */
int main() {
    char texto[] = "Bom dia, mundo!"; // Tamanho original: 15

    // Vamos colocar um terminador nulo no lugar do espaco (indice 3)
    texto[3] = '\0';

    // O printf %s e o strlen vao achar que a string eh apenas "Bom"
    printf("Texto alterado: %s\n", texto);
    printf("Novo tamanho via strlen: %zu\n", strlen(texto));

    return 0;
}