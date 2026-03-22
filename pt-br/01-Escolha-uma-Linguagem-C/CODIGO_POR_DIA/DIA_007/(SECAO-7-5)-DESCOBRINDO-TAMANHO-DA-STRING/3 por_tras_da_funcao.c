#include <stdio.h>

/*
 * Objetivo: Demonstrar a logica de percorrer a memoria ate o '\0'.
 */
size_t meu_strlen(char *s) {
    size_t contador = 0;

    // Enquanto o caractere apontado nao for o nulo...
    while (s[contador] != '\0') {
        contador++; // ...continua contando
    }

    return contador;
}

int main() {
    char *msg = "Logica";
    printf("Tamanho manual: %zu\n", meu_strlen(msg));
    return 0;
}