#include <stdio.h>

/*
 * Objetivo: Mostrar que s[i] funciona mesmo se 's' for um ponteiro (char *).
 */
int main() {
    // Apontando para um literal
    char *s = "Ponteiro";

    printf("Usando indices em um ponteiro:\n");
    printf("s[0] = %c\n", s[0]);
    printf("s[3] = %c\n", s[3]);
    printf("s[7] = %c\n", s[7]);

    return 0;
}