/*
Objetivo: calcular quociente e resto de uma divisao inteira com validacoes.

Uso:
    ./app <dividendo> <divisor>

Exemplo:
    ./app 17 5
*/

#include <errno.h>
#include <limits.h>
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

int main(int argc, char *argv[])
{
    long long dividendo;
    long long divisor;

    if (argc != 3) {
        fprintf(stderr, "Uso: %s <dividendo> <divisor>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!converter_para_ll(argv[1], &dividendo) ||
        !converter_para_ll(argv[2], &divisor)) {
        fprintf(stderr, "Erro: informe dois inteiros validos.\n");
        return EXIT_FAILURE;
    }

    if (divisor == 0) {
        fprintf(stderr, "Erro: divisao por zero nao e permitida.\n");
        return EXIT_FAILURE;
    }

    if (dividendo == LLONG_MIN && divisor == -1) {
        fprintf(stderr, "Erro: resultado excede o limite do tipo.\n");
        return EXIT_FAILURE;
    }

    printf("Quociente: %lld\n", dividendo / divisor);
    printf("Resto: %lld\n", dividendo % divisor);

    return EXIT_SUCCESS;
}
