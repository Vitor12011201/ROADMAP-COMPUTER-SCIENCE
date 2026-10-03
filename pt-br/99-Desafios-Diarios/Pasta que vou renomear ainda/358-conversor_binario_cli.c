/*
Objetivo: converter um inteiro nao negativo recebido pela linha de comando para binario.

Uso:
    ./app <inteiro-nao-negativo>

Exemplo:
    ./app 42
*/

#include <errno.h>
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

static void imprimir_binario(unsigned long long numero)
{
    unsigned long long mascara = 1;

    if (numero == 0) {
        putchar('0');
        return;
    }

    while (mascara <= numero / 2) {
        mascara *= 2;
    }

    while (mascara > 0) {
        putchar((numero & mascara) == 0 ? '0' : '1');
        mascara /= 2;
    }
}

int main(int argc, char *argv[])
{
    unsigned long long numero;

    if (argc != 2) {
        fprintf(stderr, "Uso: %s <inteiro-nao-negativo>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!converter_para_ull(argv[1], &numero)) {
        fprintf(stderr, "Erro: informe um inteiro nao negativo valido.\n");
        return EXIT_FAILURE;
    }

    printf("Binario: ");
    imprimir_binario(numero);
    putchar('\n');

    return EXIT_SUCCESS;
}
