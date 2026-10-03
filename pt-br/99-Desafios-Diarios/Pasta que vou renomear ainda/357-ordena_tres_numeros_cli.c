/*
Objetivo: ordenar tres inteiros recebidos pela linha de comando.

Uso:
    ./app <inteiro1> <inteiro2> <inteiro3>

Exemplo:
    ./app 12 -3 7
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

static void trocar(long *primeiro, long *segundo)
{
    long temporario = *primeiro;

    *primeiro = *segundo;
    *segundo = temporario;
}

int main(int argc, char *argv[])
{
    long primeiro;
    long segundo;
    long terceiro;

    if (argc != 4) {
        fprintf(stderr, "Uso: %s <inteiro1> <inteiro2> <inteiro3>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!converter_para_long(argv[1], &primeiro) ||
        !converter_para_long(argv[2], &segundo) ||
        !converter_para_long(argv[3], &terceiro)) {
        fprintf(stderr, "Erro: informe tres inteiros validos.\n");
        return EXIT_FAILURE;
    }

    if (primeiro > segundo) {
        trocar(&primeiro, &segundo);
    }

    if (segundo > terceiro) {
        trocar(&segundo, &terceiro);
    }

    if (primeiro > segundo) {
        trocar(&primeiro, &segundo);
    }

    printf("Ordem crescente: %ld, %ld, %ld\n", primeiro, segundo, terceiro);

    return EXIT_SUCCESS;
}
