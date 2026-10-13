/*
Objetivo: contar os divisores positivos de um inteiro recebido pela linha de comando.

Uso:
    ./app <inteiro-positivo>

Exemplo:
    ./app 36
*/

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

static int converter_para_ull_positivo(const char *texto, unsigned long long *resultado)
{
    char *fim = NULL;
    unsigned long long valor;

    if (texto[0] == '-') {
        return 0;
    }

    errno = 0;
    valor = strtoull(texto, &fim, 10);

    if (texto[0] == '\0' || *fim != '\0' || errno == ERANGE || valor == 0) {
        return 0;
    }

    *resultado = valor;
    return 1;
}

static unsigned long long contar_divisores(unsigned long long numero)
{
    unsigned long long quantidade = 0;

    for (unsigned long long divisor = 1; divisor <= numero / divisor; divisor++) {
        if (numero % divisor == 0) {
            quantidade += numero / divisor == divisor ? 1 : 2;
        }
    }

    return quantidade;
}

int main(int argc, char *argv[])
{
    unsigned long long numero;

    if (argc != 2) {
        fprintf(stderr, "Uso: %s <inteiro-positivo>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!converter_para_ull_positivo(argv[1], &numero)) {
        fprintf(stderr, "Erro: informe um inteiro positivo valido.\n");
        return EXIT_FAILURE;
    }

    printf("%llu possui %llu divisor(es) positivo(s).\n", numero, contar_divisores(numero));

    return EXIT_SUCCESS;
}
