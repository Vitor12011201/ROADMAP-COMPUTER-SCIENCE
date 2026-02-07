#include <stdio.h>

/*
Passo 1 - Ir até a Pasta (Diretório) do arquivo com o comando cd.
Passo 2 - Compilar o arquivo com o comando gcc (nome_do_arquivo.c) -o (nome_do_executavel).
Passo 3 - Rodar o programa com o comando ./(nome_do_executavel).
*/

int main() {
    printf("[1] Pré-Processamento\n");
    printf("[2] Compilação para Assembly\n");
    printf("[3] Linkando...\n"); // Linkar significa juntar pedaços de código em um único executável.
    printf("Programa compilado");
    return 0;
}
