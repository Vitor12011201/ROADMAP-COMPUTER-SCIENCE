/*
Objetivo: validar o formato de um endereco MAC recebido pela linha de comando.

Uso:
    ./app <mac>

Exemplos:
    ./app 00:1A:2B:3C:4D:5E
    ./app 00-1A-2B-3C-4D-5E
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int mac_valido(const char *mac)
{
    if (strlen(mac) != 17) {
        return 0;
    }

    for (int indice = 0; indice < 17; indice++) {
        if (indice % 3 == 2) {
            if (mac[indice] != ':') {
                return 0;
            }
        } else if (!isxdigit((unsigned char)mac[indice])) {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <mac>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!mac_valido(argv[1])) {
        fprintf(stderr, "Endereco MAC invalido. Use XX:XX:XX:XX:XX:XX.\n");
        return EXIT_FAILURE;
    }

    printf("Endereco MAC valido.\n");

    return EXIT_SUCCESS;
}
