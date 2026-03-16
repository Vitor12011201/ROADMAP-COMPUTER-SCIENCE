#include <stdio.h>

/*
 * Objetivo: Percorrer uma string usando apenas aritmetica de ponteiros.
 */
int main() {
    char *mensagem = "Ola!"; // Ponteiro para o primeiro caractere 'O'

    printf("Endereco inicial: %p\n", (void*)mensagem);
    printf("Primeira letra: %c\n", *mensagem);

    // Movendo o ponteiro para ver as proximas letras
    printf("Segunda letra:  %c\n", *(mensagem + 1));
    printf("Terceira letra: %c\n", *(mensagem + 2));

    return 0;
}