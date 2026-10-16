/*
Objetivo: verificar se um inteiro positivo e um numero perfeito.

Uso:
    ./app <inteiro-positivo>

Exemplos:
    ./app 6
    ./app 28
*/

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

static int converter_para_ull_positivo(const char *texto, unsigned long long *resultado)
{
    char *fim = NULL;
    unsigned long long valor;

    if (texto[0] == '-') {
        return 0;
    }

    errno = 0;
    valor = strtoull(texto, &fim, 10);

    if (texto[0] == '\0' || *fim != '\0' || errno == ERANGE || valor == 0) {
        return 0;
    }

    *resultado = valor;
    return 1;
}

static int adicionar_sem_exceder(unsigned long long *soma,
                                 unsigned long long valor,
                                 unsigned long long limite)
{
    if (*soma > limite - valor) {
        return 0;
    }

    *soma += valor;
    return 1;
}

static int eh_perfeito(unsigned long long numero)
{
    unsigned long long soma = 1;

    if (numero < 2) {
        return 0;
    }

    for (unsigned long long divisor = 2; divisor <= numero / divisor; divisor++) {
        if (numero % divisor == 0) {
            unsigned long long par = numero / divisor;

            if (!adicionar_sem_exceder(&soma, divisor, numero)) {
                return 0;
            }

            if (par != divisor && !adicionar_sem_exceder(&soma, par, numero)) {
                return 0;
            }
        }
    }

    return soma == numero;
}

int main(int argc, char *argv[])
{
    unsigned long long numero;

    if (argc != 2) {
        fprintf(stderr, "Uso: %s <inteiro-positivo>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!converter_para_ull_positivo(argv[1], &numero)) {
        fprintf(stderr, "Erro: informe um inteiro positivo valido.\n");
        return EXIT_FAILURE;
    }

    printf("%llu %s um numero perfeito.\n", numero, eh_perfeito(numero) ? "e" : "nao e");

    return EXIT_SUCCESS;
}
