#include <stdio.h>

/* OBJETIVO: Entender como o limite de tamanho do fgets protege a memoria.
 * Se a linha no arquivo for maior que o seu array, o fgets le apenas o que cabe.
 */

int main() {
    FILE *fp = fopen("citacao.txt", "r");
    char mini_buffer[10]; // Buffer propositalmente pequeno

    if (fp == NULL) return 1;

    // O fgets nunca vai escrever mais que 10 bytes (incluindo o \0)
    // Se a linha for grande, ele a cortara e continuara na proxima chamada
    while (fgets(mini_buffer, sizeof(mini_buffer), fp) != NULL) {
        printf("[%s]", mini_buffer); // Colocamos entre colchetes para ver o corte
    }

    fclose(fp);
    return 0;
}