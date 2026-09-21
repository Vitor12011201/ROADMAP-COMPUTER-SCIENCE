/*
Objetivo: calcular o fatorial de um inteiro nao negativo recebido pelo terminal.

Uso:
    ./app <inteiro-nao-negativo>

Exemplo:
    ./app 20
*/

#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

static int converter_para_ull(const char *texto, unsigned long long *resultado)
{
    char *fim = NULL;
    unsigned long long valor;

    if (texto[0] == '-') {
        return 0;
    }

    errno = 0;
    valor = strtoull(texto, &fim, 10);

    if (texto[0] == '\0' || *fim != '\0' || errno == ERANGE) {
        return 0;
    }

    *resultado = valor;
    return 1;
}

int main(int argc, char *argv[])
{
    unsigned long long numero;
    unsigned long long fatorial = 1;

    if (argc != 2) {
        fprintf(stderr, "Uso: %s <inteiro-nao-negativo>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!converter_para_ull(argv[1], &numero)) {
        fprintf(stderr, "Erro: informe um inteiro nao negativo valido.\n");
        return EXIT_FAILURE;
    }

    for (unsigned long long fator = 2; fator <= numero; fator++) {
        if (fatorial > ULLONG_MAX / fator) {
            fprintf(stderr, "Erro: o fatorial de %llu excede o limite do tipo.\n", numero);
            return EXIT_FAILURE;
        }

        fatorial *= fator;
    }

    printf("%llu! = %llu\n", numero, fatorial);

    return EXIT_SUCCESS;
}
