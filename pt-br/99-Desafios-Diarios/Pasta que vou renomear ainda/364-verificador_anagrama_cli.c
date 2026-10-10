/*
Objetivo: verificar se dois textos sao anagramas, ignorando maiusculas e pontuacao.

Uso:
    ./app <texto1> <texto2>

Exemplo:
    ./app "A gentleman" "Elegant man"
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

static int sao_anagramas(const char *primeiro, const char *segundo)
{
    int frequencias[256] = {0};

    while (*primeiro != '\0') {
        unsigned char caractere = (unsigned char)*primeiro;

        if (isalnum(caractere)) {
            frequencias[(unsigned char)tolower(caractere)]++;
        }

        primeiro++;
    }

    while (*segundo != '\0') {
        unsigned char caractere = (unsigned char)*segundo;

        if (isalnum(caractere)) {
            int indice = (unsigned char)tolower(caractere);

            frequencias[indice]--;
            if (frequencias[indice] < 0) {
                return 0;
            }
        }

        segundo++;
    }

    for (int indice = 0; indice < 256; indice++) {
        if (frequencias[indice] != 0) {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char *argv[])
{
    if (argc != 3) {
        fprintf(stderr, "Uso: %s <texto1> <texto2>\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("Os textos %s anagramas.\n", sao_anagramas(argv[1], argv[2]) ? "sao" : "nao sao");

    return EXIT_SUCCESS;
}
