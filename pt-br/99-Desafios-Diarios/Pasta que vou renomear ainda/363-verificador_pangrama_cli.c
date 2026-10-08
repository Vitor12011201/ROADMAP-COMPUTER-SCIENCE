/*
Objetivo: verificar se um texto contem todas as letras de A a Z.

Uso:
    ./app <texto>

Exemplo:
    ./app "The quick brown fox jumps over the lazy dog"
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

static int contar_letras_distintas(const char *texto)
{
    int vistas[26] = {0};
    int quantidade = 0;

    while (*texto != '\0') {
        int letra = tolower((unsigned char)*texto);

        if (letra >= 'a' && letra <= 'z' && !vistas[letra - 'a']) {
            vistas[letra - 'a'] = 1;
            quantidade++;
        }

        texto++;
    }

    return quantidade;
}

int main(int argc, char *argv[])
{
    int quantidade;

    if (argc != 2) {
        fprintf(stderr, "Uso: %s <texto>\n", argv[0]);
        return EXIT_FAILURE;
    }

    quantidade = contar_letras_distintas(argv[1]);
    printf("Letras distintas: %d de 26\n", quantidade);
    printf("O texto %s um pangrama.\n", quantidade == 26 ? "e" : "nao e");

    return EXIT_SUCCESS;
}
