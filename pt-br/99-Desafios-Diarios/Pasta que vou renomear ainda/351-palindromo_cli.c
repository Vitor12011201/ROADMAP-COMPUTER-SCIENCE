/*
Objetivo: verificar se um texto e palindromo, ignorando maiusculas e pontuacao.

Uso:
    ./app <texto>

Exemplo:
    ./app "Socorram me subi no onibus em Marrocos"
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int eh_palindromo(const char *texto)
{
    size_t inicio = 0;
    size_t fim = strlen(texto);

    if (fim == 0) {
        return 1;
    }

    fim--;

    while (inicio < fim) {
        while (inicio < fim && !isalnum((unsigned char)texto[inicio])) {
            inicio++;
        }

        while (inicio < fim && !isalnum((unsigned char)texto[fim])) {
            fim--;
        }

        if (inicio >= fim) {
            break;
        }

        if (tolower((unsigned char)texto[inicio]) !=
            tolower((unsigned char)texto[fim])) {
            return 0;
        }

        inicio++;
        fim--;
    }

    return 1;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <texto>\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("O texto %s palindromo.\n", eh_palindromo(argv[1]) ? "e" : "nao e");

    return EXIT_SUCCESS;
}
