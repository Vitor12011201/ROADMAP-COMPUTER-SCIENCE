/*
Objetivo: codificar um texto usando a cifra de Cesar pela linha de comando.

Uso:
    ./app <deslocamento> <texto>

Exemplo:
    ./app 3 "Estudar C!"
*/

#include <ctype.h>
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

static void codificar(const char *texto, int deslocamento)
{
    while (*texto != '\0') {
        unsigned char caractere = (unsigned char)*texto;

        if (isupper(caractere)) {
            putchar('A' + (caractere - 'A' + deslocamento) % 26);
        } else if (islower(caractere)) {
            putchar('a' + (caractere - 'a' + deslocamento) % 26);
        } else {
            putchar(caractere);
        }

        texto++;
    }
}

int main(int argc, char *argv[])
{
    long valor_deslocamento;
    int deslocamento;

    if (argc != 3) {
        fprintf(stderr, "Uso: %s <deslocamento> <texto>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!converter_para_long(argv[1], &valor_deslocamento)) {
        fprintf(stderr, "Erro: informe um deslocamento inteiro valido.\n");
        return EXIT_FAILURE;
    }

    deslocamento = (int)(valor_deslocamento % 26);
    if (deslocamento < 0) {
        deslocamento += 26;
    }

    codificar(argv[2], deslocamento);
    putchar('\n');

    return EXIT_SUCCESS;
}
