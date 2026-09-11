/*
Objetivo: imprimir os argumentos recebidos pelo terminal na ordem inversa.

Uso:
    ./app [--sem-indice] <palavra1> [palavra2 ...]

Exemplos:
    ./app aprender C diariamente
    ./app --sem-indice aprender C diariamente
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int primeiro_indice = 1;
    int mostrar_indice = 1;

    if (argc > 1 && strcmp(argv[1], "--sem-indice") == 0) {
        mostrar_indice = 0;
        primeiro_indice++;
    }

    if (primeiro_indice == argc) {
        fprintf(stderr, "Uso: %s [--sem-indice] <palavra1> [palavra2 ...]\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("Argumentos em ordem inversa:\n");

    for (int indice = argc - 1; indice >= primeiro_indice; indice--) {
        if (mostrar_indice) {
            printf("%d: ", indice - primeiro_indice + 1);
        }

        printf("%s\n", argv[indice]);
    }

    return EXIT_SUCCESS;
}
