/*
Objetivo: criar uma calculadora simples usando argumentos da linha de comando.

Uso:
    ./app <numero1> <+|-|*|/> <numero2>

Exemplos:
    ./app 10.5 '*' 2
    ./app 8 / 0
*/

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

static int converter_para_double(const char *texto, double *resultado)
{
    char *fim = NULL;
    double valor;

    errno = 0;
    valor = strtod(texto, &fim);

    if (texto[0] == '\0' || *fim != '\0' || errno == ERANGE) {
        return 0;
    }

    *resultado = valor;
    return 1;
}

int main(int argc, char *argv[])
{
    double primeiro_numero;
    double segundo_numero;
    double resultado;
    char operacao;

    if (argc != 4) {
        fprintf(stderr, "Uso: %s <numero1> <+|-|*|/> <numero2>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!converter_para_double(argv[1], &primeiro_numero) ||
        !converter_para_double(argv[3], &segundo_numero) || argv[2][1] != '\0') {
        fprintf(stderr, "Erro: informe dois numeros e uma operacao valida.\n");
        return EXIT_FAILURE;
    }

    operacao = argv[2][0];

    switch (operacao) {
    case '+':
        resultado = primeiro_numero + segundo_numero;
        break;
    case '-':
        resultado = primeiro_numero - segundo_numero;
        break;
    case '*':
        resultado = primeiro_numero * segundo_numero;
        break;
    case '/':
        if (segundo_numero == 0.0) {
            fprintf(stderr, "Erro: divisao por zero nao e permitida.\n");
            return EXIT_FAILURE;
        }
        resultado = primeiro_numero / segundo_numero;
        break;
    default:
        fprintf(stderr, "Erro: operacao invalida. Use +, -, * ou /.\n");
        return EXIT_FAILURE;
    }

    printf("Resultado: %.2f\n", resultado);

    return EXIT_SUCCESS;
}
