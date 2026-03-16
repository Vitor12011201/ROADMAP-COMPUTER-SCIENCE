#include <stdio.h>

/*
 * Objetivo: Mostrar que toda string em C termina com '\0' (ASCII 0).
 */
int main() {
    // O C coloca o '\0' automaticamente no final de "Caco"
    char nome[] = "Caco"; 

    printf("String: %s\n", nome);
    
    // Vamos ver o tamanho real do array (4 letras + 1 terminador)
    printf("Tamanho no sizeof: %zu bytes\n", sizeof(nome));

    // Provando que o ultimo caractere eh o zero (nulo)
    if (nome[4] == '\0') {
        printf("O caractere no indice 4 eh o terminador nulo!\n");
    }

    return 0;
}