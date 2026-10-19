/*
Objetivo: validar a sintaxe basica de um e-mail recebido pela linha de comando.

Uso:
    ./app <email>

Observacao: esta e uma validacao didatica de formato, nao uma verificacao de existencia.
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int email_valido(const char *email)
{
    const char *arroba = strchr(email, '@');
    const char *ponto = strrchr(email, '.');

    if (arroba == NULL || arroba == email || arroba[1] == '\0' ||
        strchr(arroba + 1, '@') != NULL || ponto == NULL ||
        ponto < arroba + 2 || ponto[1] == '\0') {
        return 0;
    }

    for (const char *caractere = email; *caractere != '\0'; caractere++) {
        if (isspace((unsigned char)*caractere)) {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <email>\n", argv[0]);
        return EXIT_FAILURE;
    }

    printf("E-mail %s formato basico valido.\n", email_valido(argv[1]) ? "possui" : "nao possui");

    return EXIT_SUCCESS;
}
