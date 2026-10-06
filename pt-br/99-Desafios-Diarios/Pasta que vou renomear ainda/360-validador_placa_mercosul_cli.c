/*
Objetivo: validar uma placa brasileira no padrao Mercosul ABC1D23.

Uso:
    ./app <placa>

Exemplos:
    ./app ABC1D23
    ./app ABC-1234
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int placa_mercosul_valida(const char *placa)
{
    if (strlen(placa) != 7) {
        return 0;
    }

    return isalpha((unsigned char)placa[0]) &&
           isalpha((unsigned char)placa[1]) &&
           isalpha((unsigned char)placa[2]) &&
           isdigit((unsigned char)placa[3]) &&
           isalpha((unsigned char)placa[4]) &&
           isdigit((unsigned char)placa[5]) &&
           isdigit((unsigned char)placa[6]);
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <placa>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!placa_mercosul_valida(argv[1])) {
        fprintf(stderr, "Placa invalida. Use o padrao ABC1D23.\n");
        return EXIT_FAILURE;
    }

    printf("Placa Mercosul valida.\n");

    return EXIT_SUCCESS;
}
