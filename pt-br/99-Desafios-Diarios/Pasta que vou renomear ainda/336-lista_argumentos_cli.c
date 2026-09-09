/*
Objetivo: processar uma opcao e uma lista de palavras recebidas pelo terminal.

Uso:
    ./app [--maiusculas] <palavra1> [palavra2 ...]

Exemplos:
    ./app estudo diario
    ./app --maiusculas estudo diario
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void imprimir_palavra(const char *palavra, int usar_maiusculas)
{
    while (*palavra != '\0') {
        unsigned char caractere = (unsigned char)*palavra;

        putchar(usar_maiusculas ? toupper(caractere) : caractere);
        palavra++;
    }
}

int main(int argc, char *argv[])
{
    int primeiro_indice = 1;
    int usar_maiusculas = 0;

    if (argc > 1 && strcmp(argv[1], "--maiusculas") == 0) {
        usar_maiusculas = 1;
        primeiro_indice++;
    }

    if (primeiro_indice == argc) {
        fprintf(stderr, "Uso: %s [--maiusculas] <palavra1> [palavra2 ...]\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("Quantidade de palavras: %d\n", argc - primeiro_indice);

    for (int indice = primeiro_indice; indice < argc; indice++) {
        printf("%d: ", indice - primeiro_indice + 1);
        imprimir_palavra(argv[indice], usar_maiusculas);
        putchar('\n');
    }

    return EXIT_SUCCESS;
}
