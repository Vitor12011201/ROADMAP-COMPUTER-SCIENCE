/*
Objetivo: avaliar criterios basicos de uma senha recebida pela linha de comando.

Uso:
    ./app <senha>

Exemplo:
    ./app "Estudo#2026"
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    const char *senha;
    int tem_maiuscula = 0;
    int tem_minuscula = 0;
    int tem_digito = 0;
    int tem_simbolo = 0;
    size_t tamanho = 0;

    if (argc != 2) {
        fprintf(stderr, "Uso: %s <senha>\n", argv[0]);
        return EXIT_FAILURE;
    }

    senha = argv[1];

    while (senha[tamanho] != '\0') {
        unsigned char caractere = (unsigned char)senha[tamanho];

        tem_maiuscula |= isupper(caractere) != 0;
        tem_minuscula |= islower(caractere) != 0;
        tem_digito |= isdigit(caractere) != 0;
        tem_simbolo |= ispunct(caractere) != 0;
        tamanho++;
    }

    printf("Tamanho minimo (8): %s\n", tamanho >= 8 ? "ok" : "pendente");
    printf("Letra maiuscula: %s\n", tem_maiuscula ? "ok" : "pendente");
    printf("Letra minuscula: %s\n", tem_minuscula ? "ok" : "pendente");
    printf("Digito: %s\n", tem_digito ? "ok" : "pendente");
    printf("Simbolo: %s\n", tem_simbolo ? "ok" : "pendente");

    if (tamanho >= 8 && tem_maiuscula && tem_minuscula && tem_digito && tem_simbolo) {
        printf("Senha aprovada.\n");
        return EXIT_SUCCESS;
    }

    printf("Senha precisa de mais requisitos.\n");
    return EXIT_FAILURE;
}
