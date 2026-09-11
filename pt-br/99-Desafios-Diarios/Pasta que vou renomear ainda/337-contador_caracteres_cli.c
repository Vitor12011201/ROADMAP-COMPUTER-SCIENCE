/*
Objetivo: contar os caracteres das palavras recebidas pela linha de comando.

Uso:
    ./app [--sem-espacos] <texto1> [texto2 ...]

Exemplos:
    ./app "ola mundo" C
    ./app --sem-espacos "ola mundo" C
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static size_t contar_caracteres(const char *texto, int ignorar_espacos)
{
    size_t quantidade = 0;

    while (*texto != '\0') {
        unsigned char caractere = (unsigned char)*texto;

        if (!ignorar_espacos || !isspace(caractere)) {
            quantidade++;
        }

        texto++;
    }

    return quantidade;
}

int main(int argc, char *argv[])
{
    int primeiro_indice = 1;
    int ignorar_espacos = 0;
    size_t total = 0;

    if (argc > 1 && strcmp(argv[1], "--sem-espacos") == 0) {
        ignorar_espacos = 1;
        primeiro_indice++;
    }

    if (primeiro_indice == argc) {
        fprintf(stderr, "Uso: %s [--sem-espacos] <texto1> [texto2 ...]\n", argv[0]);
        return EXIT_FAILURE;
    }

    for (int indice = primeiro_indice; indice < argc; indice++) {
        size_t quantidade = contar_caracteres(argv[indice], ignorar_espacos);

        printf("%s: %zu caractere(s)\n", argv[indice], quantidade);
        total += quantidade;
    }

    printf("Total: %zu caractere(s)\n", total);

    return EXIT_SUCCESS;
}
