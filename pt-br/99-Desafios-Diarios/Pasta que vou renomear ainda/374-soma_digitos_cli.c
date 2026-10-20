/*
Objetivo: calcular a soma dos digitos e a raiz digital de um inteiro nao negativo.

Uso:
    ./app <inteiro-nao-negativo>

Exemplo:
    ./app 9875
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

static unsigned int somar_digitos(unsigned long long numero)
{
    unsigned int soma = 0;

    do {
        soma += (unsigned int)(numero % 10);
        numero /= 10;
    } while (numero != 0);

    return soma;
}

int main(int argc, char *argv[])
{
    unsigned long long numero;
    unsigned int soma;
    unsigned int raiz;

    if (argc != 2) {
        fprintf(stderr, "Uso: %s <inteiro-nao-negativo>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!converter_para_ull(argv[1], &numero)) {
        fprintf(stderr, "Erro: informe um inteiro nao negativo valido.\n");
        return EXIT_FAILURE;
    }

    soma = somar_digitos(numero);
    raiz = soma;

    while (raiz >= 10) {
        raiz = somar_digitos(raiz);
    }

    printf("Soma dos digitos: %u\n", soma);
    printf("Raiz digital: %u\n", raiz);

    return EXIT_SUCCESS;
}
