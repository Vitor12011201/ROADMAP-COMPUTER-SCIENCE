/*
Objetivo: verificar se uma lista de inteiros esta em ordem crescente.

Uso:
    ./app <inteiro1> <inteiro2> [inteiro3 ...]

Exemplos:
    ./app 1 4 4 9
    ./app 3 8 2
*/

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

static int converter_para_long(const char *texto, long *resultado)
{
    char *fim = NULL;
    long valor;

    errno = 0;
    valor = strtol(texto, &fim, 10);

    if (texto[0] == '\0' || *fim != '\0' || errno == ERANGE) {
        return 0;
    }

    *resultado = valor;
    return 1;
}

int main(int argc, char *argv[])
{
    long anterior;

    if (argc < 3) {
        fprintf(stderr, "Uso: %s <inteiro1> <inteiro2> [inteiro3 ...]\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!converter_para_long(argv[1], &anterior)) {
        fprintf(stderr, "Erro: '%s' nao e um inteiro valido.\n", argv[1]);
        return EXIT_FAILURE;
    }

    for (int indice = 2; indice < argc; indice++) {
        long atual;

        if (!converter_para_long(argv[indice], &atual)) {
            fprintf(stderr, "Erro: '%s' nao e um inteiro valido.\n", argv[indice]);
            return EXIT_FAILURE;
        }

        if (atual < anterior) {
            printf("A lista nao esta ordenada: %ld aparece antes de %ld.\n",
                   anterior, atual);
            return EXIT_SUCCESS;
        }

        anterior = atual;
    }

    printf("A lista esta em ordem crescente.\n");

    return EXIT_SUCCESS;
}
