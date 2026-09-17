/*
Objetivo: validar uma data recebida pela linha de comando no formato DD/MM/AAAA.

Uso:
    ./app <data>

Exemplos:
    ./app 29/02/2024
    ./app 29/02/2023
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int ler_digitos(const char *texto, int quantidade, int *resultado)
{
    int valor = 0;

    for (int indice = 0; indice < quantidade; indice++) {
        if (!isdigit((unsigned char)texto[indice])) {
            return 0;
        }

        valor = valor * 10 + (texto[indice] - '0');
    }

    *resultado = valor;
    return 1;
}

static int ano_bissexto(int ano)
{
    return (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
}

static int dias_no_mes(int mes, int ano)
{
    const int dias_por_mes[] = {31, 28, 31, 30, 31, 30,
                                31, 31, 30, 31, 30, 31};

    if (mes == 2 && ano_bissexto(ano)) {
        return 29;
    }

    return dias_por_mes[mes - 1];
}

int main(int argc, char *argv[])
{
    const char *data;
    int dia;
    int mes;
    int ano;

    if (argc != 2) {
        fprintf(stderr, "Uso: %s <data DD/MM/AAAA>\n", argv[0]);
        return EXIT_FAILURE;
    }

    data = argv[1];

    if (strlen(data) != 10 || data[2] != '/' || data[5] != '/' ||
        !ler_digitos(data, 2, &dia) || !ler_digitos(data + 3, 2, &mes) ||
        !ler_digitos(data + 6, 4, &ano) || ano == 0 || mes < 1 || mes > 12 ||
        dia < 1 || dia > dias_no_mes(mes, ano)) {
        fprintf(stderr, "Data invalida: use uma data real no formato DD/MM/AAAA.\n");
        return EXIT_FAILURE;
    }

    printf("Data valida: %02d/%02d/%04d\n", dia, mes, ano);

    return EXIT_SUCCESS;
}
