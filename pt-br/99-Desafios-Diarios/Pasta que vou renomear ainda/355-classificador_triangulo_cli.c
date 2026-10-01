/*
Objetivo: validar tres lados e classificar o triangulo formado por eles.

Uso:
    ./app <lado1> <lado2> <lado3>

Exemplos:
    ./app 3 4 5
    ./app 5 5 5
*/

#include <errno.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

static int converter_para_double(const char *texto, double *resultado)
{
    char *fim = NULL;
    double valor;

    errno = 0;
    valor = strtod(texto, &fim);

    if (texto[0] == '\0' || *fim != '\0' || errno == ERANGE ||
        !isfinite(valor) || valor <= 0.0) {
        return 0;
    }

    *resultado = valor;
    return 1;
}

int main(int argc, char *argv[])
{
    double lado1;
    double lado2;
    double lado3;

    if (argc != 4) {
        fprintf(stderr, "Uso: %s <lado1> <lado2> <lado3>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!converter_para_double(argv[1], &lado1) ||
        !converter_para_double(argv[2], &lado2) ||
        !converter_para_double(argv[3], &lado3)) {
        fprintf(stderr, "Erro: todos os lados devem ser numeros positivos validos.\n");
        return EXIT_FAILURE;
    }

    if (lado1 + lado2 <= lado3 || lado1 + lado3 <= lado2 || lado2 + lado3 <= lado1) {
        fprintf(stderr, "Erro: os lados informados nao formam um triangulo.\n");
        return EXIT_FAILURE;
    }

    if (lado1 == lado2 && lado2 == lado3) {
        printf("Triangulo equilatero.\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("Triangulo isosceles.\n");
    } else {
        printf("Triangulo escaleno.\n");
    }

    return EXIT_SUCCESS;
}
