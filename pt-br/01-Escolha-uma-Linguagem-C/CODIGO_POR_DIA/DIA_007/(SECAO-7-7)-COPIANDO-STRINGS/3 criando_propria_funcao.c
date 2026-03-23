#include <stdio.h>

/*
 * Objetivo: Mostrar a logica de copiar byte a byte ate o \0.
 */
void meu_strcpy(char *destino, char *origem) {
    int i = 0;

    // Enquanto o caractere da origem nao for o fim (\0)
    while (origem[i] != '\0') {
        destino[i] = origem[i]; // Copia o caractere
        i++;
    }

    // IMPORTANTE: Nao esqueca de colocar o \0 no final do destino!
    destino[i] = '\0';
}

int main() {
    char fonte[] = "Copia manual";
    char destino[20];

    meu_strcpy(destino, fonte);

    printf("Destino: %s\n", destino);
    return 0;
}