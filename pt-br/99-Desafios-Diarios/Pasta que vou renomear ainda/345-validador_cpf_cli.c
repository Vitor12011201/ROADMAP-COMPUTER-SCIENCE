/*
Objetivo: validar um CPF de 11 digitos recebido pela linha de comando.

Uso:
    ./app <cpf-sem-pontuacao>

Exemplo:
    ./app 52998224725
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int calcular_digito(const char *cpf, int peso_inicial, int quantidade)
{
    int soma = 0;

    for (int indice = 0, peso = peso_inicial; indice < quantidade; indice++, peso--) {
        soma += (cpf[indice] - '0') * peso;
    }

    soma %= 11;
    return soma < 2 ? 0 : 11 - soma;
}

static int cpf_valido(const char *cpf)
{
    int todos_iguais = 1;

    if (strlen(cpf) != 11) {
        return 0;
    }

    for (int indice = 0; indice < 11; indice++) {
        if (!isdigit((unsigned char)cpf[indice])) {
            return 0;
        }

        if (indice > 0 && cpf[indice] != cpf[0]) {
            todos_iguais = 0;
        }
    }

    if (todos_iguais) {
        return 0;
    }

    return calcular_digito(cpf, 10, 9) == cpf[9] - '0' &&
           calcular_digito(cpf, 11, 10) == cpf[10] - '0';
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <cpf-sem-pontuacao>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!cpf_valido(argv[1])) {
        fprintf(stderr, "CPF invalido. Informe exatamente 11 digitos validos.\n");
        return EXIT_FAILURE;
    }

    printf("CPF valido.\n");

    return EXIT_SUCCESS;
}
