/*
Objetivo: verificar se os parenteses de um texto estao balanceados.

Uso:
    ./app <texto>

Exemplos:
    ./app "funcao(a, (b + c))"
    ./app "(a + b))"
*/

#include <stdio.h>
#include <stdlib.h>

static int parenteses_balanceados(const char *texto)
{
    int profundidade = 0;

    while (*texto != '\0') {
        if (*texto == '(') {
            profundidade++;
        } else if (*texto == ')') {
            if (profundidade == 0) {
                return 0;
            }

            profundidade--;
        }

        texto++;
    }

    return profundidade == 0;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <texto>\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("Parenteses %s.\n",
           parenteses_balanceados(argv[1]) ? "balanceados" : "desbalanceados");

    return EXIT_SUCCESS;
}
