#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Desafio 375: determine se um texto e um palindromo.
 * Uso: 375-palindromo_cli.exe "A base do teto desaba"
 * Exemplo: entrada "A base do teto desaba" -> palindromo
 */

static int e_palindromo(const char *texto)
{
    size_t esquerda = 0;
    size_t direita = strlen(texto);

    if (direita == 0) {
        return 1;
    }
    direita--;

    while (esquerda < direita) {
        while (esquerda < direita && !isalnum((unsigned char)texto[esquerda])) {
            esquerda++;
        }
        while (esquerda < direita && !isalnum((unsigned char)texto[direita])) {
            direita--;
        }

        if (tolower((unsigned char)texto[esquerda]) !=
            tolower((unsigned char)texto[direita])) {
            return 0;
        }
        esquerda++;
        direita--;
    }

    return 1;
}

int main(int argc, char **argv)
{
    if (argc != 2) {
        fprintf(stderr, "Uso: %s \"texto\"\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("%s\n", e_palindromo(argv[1]) ? "palindromo" : "nao palindromo");
    return EXIT_SUCCESS;
}
