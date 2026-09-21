/*
Objetivo: gerar um resumo de numeros inteiros recebidos pela linha de comando.

Uso:
    ./app <inteiro1> [inteiro2 ...]

Exemplo:
    ./app 12 -4 8 20
*/

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

static int converter_para_long(const char *texto, long *resultado)
{
    char *fim = NULL;
    long valor;

    errno = 0;
    valor = strtol(texto, &fim, 10);

    if (texto[0] == '\0' || *fim != '\0' || errno == ERANGE) {
        return 0;
    }

    *resultado = valor;
    return 1;
}

int main(int argc, char *argv[])
{
    double soma = 0.0;
    long menor = 0;
    long maior = 0;

    if (argc < 2) {
        fprintf(stderr, "Uso: %s <inteiro1> [inteiro2 ...]\n", argv[0]);
        return EXIT_FAILURE;
    }

    for (int indice = 1; indice < argc; indice++) {
        long numero;

        if (!converter_para_long(argv[indice], &numero)) {
            fprintf(stderr, "Erro: '%s' nao e um inteiro valido.\n", argv[indice]);
            return EXIT_FAILURE;
        }

        if (indice == 1 || numero < menor) {
            menor = numero;
        }

        if (indice == 1 || numero > maior) {
            maior = numero;
        }

        soma += numero;
    }

    printf("Quantidade: %d\n", argc - 1);
    printf("Menor: %ld\n", menor);
    printf("Maior: %ld\n", maior);
    printf("Media: %.2f\n", soma / (argc - 1));

    return EXIT_SUCCESS;
}
