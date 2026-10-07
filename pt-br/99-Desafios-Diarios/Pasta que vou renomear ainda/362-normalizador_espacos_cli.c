/*
Objetivo: remover espacos excessivos de um texto recebido pela linha de comando.

Uso:
    ./app <texto>

Exemplo:
    ./app "  Estudar   C   diariamente  "
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

static void imprimir_normalizado(const char *texto)
{
    int escreveu_caractere = 0;
    int espaco_pendente = 0;

    while (*texto != '\0') {
        unsigned char caractere = (unsigned char)*texto;

        if (isspace(caractere)) {
            if (escreveu_caractere) {
                espaco_pendente = 1;
            }
        } else {
            if (espaco_pendente) {
                putchar(' ');
                espaco_pendente = 0;
            }

            putchar(caractere);
            escreveu_caractere = 1;
        }

        texto++;
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <texto>\n", argv[0]);
        return EXIT_FAILURE;
    }

    imprimir_normalizado(argv[1]);
    putchar('\n');

    return EXIT_SUCCESS;
}
