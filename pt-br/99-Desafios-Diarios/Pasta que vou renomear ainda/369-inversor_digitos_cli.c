/*
Objetivo: inverter os digitos de um inteiro nao negativo recebido pela linha de comando.

Uso:
    ./app <inteiro-nao-negativo>

Exemplo:
    ./app 12340
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

static int inverter_digitos(unsigned long long numero, unsigned long long *resultado)
{
    unsigned long long invertido = 0;

    do {
        unsigned long long digito = numero % 10;

        if (invertido > (ULLONG_MAX - digito) / 10) {
            return 0;
        }

        invertido = invertido * 10 + digito;
        numero /= 10;
    } while (numero != 0);

    *resultado = invertido;
    return 1;
}

int main(int argc, char *argv[])
{
    unsigned long long numero;
    unsigned long long invertido;

    if (argc != 2) {
        fprintf(stderr, "Uso: %s <inteiro-nao-negativo>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!converter_para_ull(argv[1], &numero)) {
        fprintf(stderr, "Erro: informe um inteiro nao negativo valido.\n");
        return EXIT_FAILURE;
    }

    if (!inverter_digitos(numero, &invertido)) {
        fprintf(stderr, "Erro: o numero invertido excede o limite do tipo.\n");
        return EXIT_FAILURE;
    }

    printf("Invertido: %llu\n", invertido);

    return EXIT_SUCCESS;
}
