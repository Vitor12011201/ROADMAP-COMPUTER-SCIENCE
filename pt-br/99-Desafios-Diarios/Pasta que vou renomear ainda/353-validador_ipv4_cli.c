/*
Objetivo: validar um endereco IPv4 recebido pela linha de comando.

Uso:
    ./app <ipv4>

Exemplos:
    ./app 192.168.1.10
    ./app 256.10.1.1
*/

#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

static int ipv4_valido(const char *endereco)
{
    const char *parte = endereco;

    for (int indice = 0; indice < 4; indice++) {
        char *fim = NULL;
        long octeto;

        if (!isdigit((unsigned char)*parte)) {
            return 0;
        }

        errno = 0;
        octeto = strtol(parte, &fim, 10);

        if (errno == ERANGE || octeto > 255) {
            return 0;
        }

        if (indice < 3) {
            if (*fim != '.') {
                return 0;
            }

            parte = fim + 1;
        } else if (*fim != '\0') {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <ipv4>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!ipv4_valido(argv[1])) {
        fprintf(stderr, "Endereco IPv4 invalido.\n");
        return EXIT_FAILURE;
    }

    printf("Endereco IPv4 valido.\n");

    return EXIT_SUCCESS;
}
