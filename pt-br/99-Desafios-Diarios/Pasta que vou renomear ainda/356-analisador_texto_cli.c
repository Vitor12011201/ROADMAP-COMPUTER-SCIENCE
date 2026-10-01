/*
Objetivo: contar categorias de caracteres em um texto recebido pela linha de comando.

Uso:
    ./app <texto>

Exemplo:
    ./app "Estudo C 2026!"
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    const char *texto;
    size_t letras = 0;
    size_t digitos = 0;
    size_t espacos = 0;
    size_t outros = 0;

    if (argc != 2) {
        fprintf(stderr, "Uso: %s <texto>\n", argv[0]);
        return EXIT_FAILURE;
    }

    texto = argv[1];

    while (*texto != '\0') {
        unsigned char caractere = (unsigned char)*texto;

        if (isalpha(caractere)) {
            letras++;
        } else if (isdigit(caractere)) {
            digitos++;
        } else if (isspace(caractere)) {
            espacos++;
        } else {
            outros++;
        }

        texto++;
    }

    printf("Letras: %zu\n", letras);
    printf("Digitos: %zu\n", digitos);
    printf("Espacos: %zu\n", espacos);
    printf("Outros: %zu\n", outros);

    return EXIT_SUCCESS;
}
