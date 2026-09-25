/*
Objetivo: converter uma quantidade de segundos em dias, horas, minutos e segundos.

Uso:
    ./app <segundos>

Exemplo:
    ./app 93784
*/

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

static int converter_para_ull(const char *texto, unsigned long long *resultado)
{
    char *fim = NULL;
    unsigned long long valor;

    if (texto[0] == '-') {
        return 0;
    }

    errno = 0;
    valor = strtoull(texto, &fim, 10);

    if (texto[0] == '\0' || *fim != '\0' || errno == ERANGE) {
        return 0;
    }

    *resultado = valor;
    return 1;
}

int main(int argc, char *argv[])
{
    unsigned long long segundos;
    unsigned long long dias;
    unsigned long long horas;
    unsigned long long minutos;

    if (argc != 2) {
        fprintf(stderr, "Uso: %s <segundos>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!converter_para_ull(argv[1], &segundos)) {
        fprintf(stderr, "Erro: informe uma quantidade valida de segundos.\n");
        return EXIT_FAILURE;
    }

    dias = segundos / 86400;
    segundos %= 86400;
    horas = segundos / 3600;
    segundos %= 3600;
    minutos = segundos / 60;
    segundos %= 60;

    printf("%llu dia(s), %llu hora(s), %llu minuto(s) e %llu segundo(s).\n",
           dias, horas, minutos, segundos);

    return EXIT_SUCCESS;
}
