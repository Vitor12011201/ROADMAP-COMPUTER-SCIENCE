/*
Objetivo: verificar se um texto possui formato valido para um identificador em C.

Uso:
    ./app <identificador>

Exemplos:
    ./app total_notas
    ./app 3valor
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

static int identificador_valido(const char *texto)
{
    if (*texto == '\0' ||
        (!isalpha((unsigned char)*texto) && *texto != '_')) {
        return 0;
    }

    texto++;

    while (*texto != '\0') {
        if (!isalnum((unsigned char)*texto) && *texto != '_') {
            return 0;
        }

        texto++;
    }

    return 1;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <identificador>\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("'%s' %s formato valido de identificador.\n",
           argv[1], identificador_valido(argv[1]) ? "possui" : "nao possui");

    return EXIT_SUCCESS;
}
