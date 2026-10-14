/*
Objetivo: converter tres componentes RGB para uma cor hexadecimal.

Uso:
    ./app <vermelho> <verde> <azul>

Exemplo:
    ./app 30 144 255
*/

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

static int converter_componente(const char *texto, unsigned int *resultado)
{
    char *fim = NULL;
    long valor;

    errno = 0;
    valor = strtol(texto, &fim, 10);

    if (texto[0] == '\0' || *fim != '\0' || errno == ERANGE ||
        valor < 0 || valor > 255) {
        return 0;
    }

    *resultado = (unsigned int)valor;
    return 1;
}

int main(int argc, char *argv[])
{
    unsigned int vermelho;
    unsigned int verde;
    unsigned int azul;

    if (argc != 4) {
        fprintf(stderr, "Uso: %s <vermelho> <verde> <azul>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!converter_componente(argv[1], &vermelho) ||
        !converter_componente(argv[2], &verde) ||
        !converter_componente(argv[3], &azul)) {
        fprintf(stderr, "Erro: cada componente deve estar entre 0 e 255.\n");
        return EXIT_FAILURE;
    }

    printf("Cor hexadecimal: #%02X%02X%02X\n", vermelho, verde, azul);

    return EXIT_SUCCESS;
}
