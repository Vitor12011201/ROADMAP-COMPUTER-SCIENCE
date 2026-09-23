/*
Objetivo: verificar se um inteiro recebido pela linha de comando e primo.

Uso:
    ./app <inteiro>

Exemplos:
    ./app 97
    ./app 100
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

static int eh_primo(long numero)
{
    if (numero < 2) {
        return 0;
    }

    if (numero == 2) {
        return 1;
    }

    if (numero % 2 == 0) {
        return 0;
    }

    for (long divisor = 3; divisor <= numero / divisor; divisor += 2) {
        if (numero % divisor == 0) {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char *argv[])
{
    long numero;

    if (argc != 2) {
        fprintf(stderr, "Uso: %s <inteiro>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!converter_para_long(argv[1], &numero)) {
        fprintf(stderr, "Erro: informe um inteiro valido.\n");
        return EXIT_FAILURE;
    }

    printf("%ld %s primo.\n", numero, eh_primo(numero) ? "e" : "nao e");

    return EXIT_SUCCESS;
}
