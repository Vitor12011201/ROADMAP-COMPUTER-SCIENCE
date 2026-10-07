/*
Objetivo: contar palavras em um texto recebido pela linha de comando.

Uso:
    ./app <texto>

Exemplo:
    ./app "  Estudar C todos os dias  "
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

static size_t contar_palavras(const char *texto)
{
    int dentro_de_palavra = 0;
    size_t quantidade = 0;

    while (*texto != '\0') {
        if (isspace((unsigned char)*texto)) {
            dentro_de_palavra = 0;
        } else if (!dentro_de_palavra) {
            quantidade++;
            dentro_de_palavra = 1;
        }

        texto++;
    }

    return quantidade;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <texto>\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("Palavras: %zu\n", contar_palavras(argv[1]));

    return EXIT_SUCCESS;
}
