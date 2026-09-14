/*
Objetivo: converter um numero de uma base entre 2 e 36 para decimal.

Uso:
    ./app <numero> <base>

Exemplo:
    ./app 101101 2
    ./app FF 16
*/

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

static int converter_inteiro(const char *texto, int base, long *resultado)
{
    char *fim = NULL;
    long valor;

    errno = 0;
    valor = strtol(texto, &fim, base);

    if (texto[0] == '\0' || *fim != '\0' || errno == ERANGE) {
        return 0;
    }

    *resultado = valor;
    return 1;
}

int main(int argc, char *argv[])
{
    long base;
    long numero;

    if (argc != 3) {
        fprintf(stderr, "Uso: %s <numero> <base 2..36>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!converter_inteiro(argv[2], 10, &base) || base < 2 || base > 36) {
        fprintf(stderr, "Erro: a base deve ser um inteiro entre 2 e 36.\n");
        return EXIT_FAILURE;
    }

    if (!converter_inteiro(argv[1], (int)base, &numero)) {
        fprintf(stderr, "Erro: '%s' nao e valido na base %ld.\n", argv[1], base);
        return EXIT_FAILURE;
    }

    printf("Valor decimal: %ld\n", numero);

    return EXIT_SUCCESS;
}
