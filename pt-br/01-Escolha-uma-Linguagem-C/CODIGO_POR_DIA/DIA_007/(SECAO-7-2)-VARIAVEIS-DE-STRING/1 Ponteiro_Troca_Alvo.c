#include <stdio.h>

/*
 * Objetivo: Mostrar que um ponteiro de char pode mudar para onde aponta.
 */
int main() {
    // 's' aponta para o primeiro caractere de "Bom dia"
    char *s = "Bom dia";
    printf("Frase 1: %s\n", s);

    // Agora 's' larga o "Bom dia" e aponta para "Boa noite"
    s = "Boa noite";
    printf("Frase 2: %s\n", s);

    return 0;
}