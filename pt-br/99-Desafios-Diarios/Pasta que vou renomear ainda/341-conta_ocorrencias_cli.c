/*
Objetivo: contar quantas vezes um numero aparece nos argumentos recebidos.

Uso:
    ./app <alvo> <inteiro1> [inteiro2 ...]

Exemplo:
    ./app 7 2 7 4 7 9
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
    long alvo;
    int ocorrencias = 0;

    if (argc < 3) {
        fprintf(stderr, "Uso: %s <alvo> <inteiro1> [inteiro2 ...]\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!converter_para_long(argv[1], &alvo)) {
        fprintf(stderr, "Erro: '%s' nao e um alvo valido.\n", argv[1]);
        return EXIT_FAILURE;
    }

    for (int indice = 2; indice < argc; indice++) {
        long numero;

        if (!converter_para_long(argv[indice], &numero)) {
            fprintf(stderr, "Erro: '%s' nao e um inteiro valido.\n", argv[indice]);
            return EXIT_FAILURE;
        }

        if (numero == alvo) {
            ocorrencias++;
        }
    }

    printf("O numero %ld aparece %d vez(es).\n", alvo, ocorrencias);

    return EXIT_SUCCESS;
}
