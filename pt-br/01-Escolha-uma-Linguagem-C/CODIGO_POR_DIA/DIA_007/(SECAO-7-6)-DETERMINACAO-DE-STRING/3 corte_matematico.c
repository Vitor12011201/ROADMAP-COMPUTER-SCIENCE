#include <stdio.h>

/*
 * Objetivo: Demonstrar que o C para de ler assim que encontra o primeiro \0.
 */
int main() {
    char mensagem[] = "Programacao em C";

    printf("Original: %s\n", mensagem);

    // Colocamos um terminador nulo no indice 11 (onde comeca o " em C")
    // O array continua tendo o mesmo tamanho, mas a "string" encurta.
    mensagem[11] = '\0';

    printf("Depois do corte: %s\n", mensagem); // Imprime apenas "Programacao"

    return 0;
}