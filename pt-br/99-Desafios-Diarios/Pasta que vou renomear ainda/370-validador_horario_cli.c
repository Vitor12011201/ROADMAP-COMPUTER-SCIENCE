/*
Objetivo: validar um horario de 24 horas no formato HH:MM.

Uso:
    ./app <horario>

Exemplos:
    ./app 23:59
    ./app 24:00
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int horario_valido(const char *horario)
{
    int horas;
    int minutos;

    if (strlen(horario) != 5 || horario[2] != ':' ||
        !isdigit((unsigned char)horario[0]) ||
        !isdigit((unsigned char)horario[1]) ||
        !isdigit((unsigned char)horario[3]) ||
        !isdigit((unsigned char)horario[4])) {
        return 0;
    }

    horas = (horario[0] - '0') * 10 + horario[1] - '0';
    minutos = (horario[3] - '0') * 10 + horario[4] - '0';

    return horas < 24 && minutos < 60;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <horario HH:MM>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!horario_valido(argv[1])) {
        fprintf(stderr, "Horario invalido. Use um horario entre 00:00 e 23:59.\n");
        return EXIT_FAILURE;
    }

    printf("Horario valido.\n");

    return EXIT_SUCCESS;
}
