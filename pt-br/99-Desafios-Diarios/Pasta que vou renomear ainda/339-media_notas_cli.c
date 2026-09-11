/*
Objetivo: calcular a media de notas recebidas pela linha de comando.

Uso:
    ./app <nota1> [nota2 ...]

Exemplo:
    ./app 7.5 8 10 6.5
*/

#include <errno.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

static int converter_para_nota(const char *texto, double *nota)
{
    char *fim = NULL;
    double valor;

    errno = 0;
    valor = strtod(texto, &fim);

    if (texto[0] == '\0' || *fim != '\0' || errno == ERANGE ||
        !isfinite(valor)) {
        return 0;
    }

    *nota = valor;
    return 1;
}

int main(int argc, char *argv[])
{
    double soma = 0.0;

    if (argc < 2) {
        fprintf(stderr, "Uso: %s <nota1> [nota2 ...]\n", argv[0]);
        return EXIT_FAILURE;
    }

    for (int indice = 1; indice < argc; indice++) {
        double nota;

        if (!converter_para_nota(argv[indice], &nota)) {
            fprintf(stderr, "Erro: '%s' nao e uma nota valida.\n", argv[indice]);
            return EXIT_FAILURE;
        }

        soma += nota;
    }

    printf("Media de %d nota(s): %.2f\n", argc - 1, soma / (argc - 1));

    return EXIT_SUCCESS;
}
