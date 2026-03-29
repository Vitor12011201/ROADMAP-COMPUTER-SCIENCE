#include <stdio.h>

/* OBJETIVO: Mostrar que a tela (stdout) funciona como um arquivo aberto.
 */

int main() {
    // Usar printf eh o mesmo que usar fprintf no "arquivo" stdout (tela)
    printf("Olá pelo printf comum!\n");

    // stdout ja vem pronto no C, nao precisa de fopen
    fprintf(stdout, "Olá pelo fprintf usando o fluxo stdout!\n");

    return 0;
}