#include <stdio.h>

/* OBJETIVO: Mostrar que uma variável declarada dentro de um bloco interno
   oculta (hides) uma variável de mesmo nome do bloco externo.
   Dentro do bloco, a externa fica invisível. */

int main() {
    int valor = 10;

    printf("Antes do bloco: valor = %d\n", valor);

    {
        int valor = 20;   // Esta oculta a 'valor' externa dentro deste bloco
        printf("Dentro do bloco: valor = %d\n", valor);
    } // A 'valor' interna morre aqui

    printf("Depois do bloco: valor = %d (original)\n", valor);

    return 0;
}