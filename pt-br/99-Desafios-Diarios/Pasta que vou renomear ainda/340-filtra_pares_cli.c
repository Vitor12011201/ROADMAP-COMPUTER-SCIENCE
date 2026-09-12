/*
Objetivo: filtrar os numeros pares recebidos pela linha de comando.

Uso:
    ./app <inteiro1> [inteiro2 ...]

Exemplo:
    ./app 3 8 -2 11 20
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
    int encontrou_par = 0;

    if (argc < 2) {
        fprintf(stderr, "Uso: %s <inteiro1> [inteiro2 ...]\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("Numeros pares:");

    for (int indice = 1; indice < argc; indice++) {
        long numero;

        if (!converter_para_long(argv[indice], &numero)) {
            fprintf(stderr, "\nErro: '%s' nao e um inteiro valido.\n", argv[indice]);
            return EXIT_FAILURE;
        }

        if (numero % 2 == 0) {
            printf(" %ld", numero);
            encontrou_par = 1;
        }
    }

    if (!encontrou_par) {
        printf(" nenhum");
    }

    putchar('\n');

    return EXIT_SUCCESS;
}
