#include <stdio.h>

/*
 * Objetivo: Mostrar que o caractere '\0' eh numericamente igual a 0.
 */
int main() {
    char palavra[] = "Oi"; // 'O', 'i', '\0'

    printf("--- Mapa de Caracteres ---\n");
    for (int i = 0; i <= 2; i++) {
        // %c imprime a letra, %d imprime o valor na tabela ASCII
        printf("Indice %d: Caractere '%c' | Valor ASCII: %d\n", i, palavra[i], palavra[i]);
    }

    return 0;
}