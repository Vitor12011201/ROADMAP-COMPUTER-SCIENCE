/*
Objetivo: calcular o maximo divisor comum de dois inteiros pela linha de comando.

Uso:
    ./app <inteiro1> <inteiro2>

Exemplo:
    ./app 84 -30
*/

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

static int converter_para_ll(const char *texto, long long *resultado)
{
    char *fim = NULL;
    long long valor;

    errno = 0;
    valor = strtoll(texto, &fim, 10);

    if (texto[0] == '\0' || *fim != '\0' || errno == ERANGE) {
        return 0;
    }

    *resultado = valor;
    return 1;
}

static unsigned long long magnitude(long long valor)
{
    return valor < 0 ? (unsigned long long)(-(valor + 1)) + 1 : (unsigned long long)valor;
}

static unsigned long long calcular_mdc(unsigned long long primeiro,
                                       unsigned long long segundo)
{
    while (segundo != 0) {
        unsigned long long resto = primeiro % segundo;

        primeiro = segundo;
        segundo = resto;
    }

    return primeiro;
}

int main(int argc, char *argv[])
{
    long long primeiro;
    long long segundo;

    if (argc != 3) {
        fprintf(stderr, "Uso: %s <inteiro1> <inteiro2>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!converter_para_ll(argv[1], &primeiro) ||
        !converter_para_ll(argv[2], &segundo) || (primeiro == 0 && segundo == 0)) {
        fprintf(stderr, "Erro: informe dois inteiros e pelo menos um deve ser diferente de zero.\n");
        return EXIT_FAILURE;
    }

    printf("MDC: %llu\n", calcular_mdc(magnitude(primeiro), magnitude(segundo)));

    return EXIT_SUCCESS;
}
