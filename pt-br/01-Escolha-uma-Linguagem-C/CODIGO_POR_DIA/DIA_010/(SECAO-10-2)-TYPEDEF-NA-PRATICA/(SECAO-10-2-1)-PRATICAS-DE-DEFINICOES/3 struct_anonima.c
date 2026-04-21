#include <stdio.h>

/* OBJETIVO: Criar uma struct sem nome (anônima) usando apenas o apelido 'Ponto'.
   O código fica mais limpo, mas a palavra 'struct Ponto' deixa de existir. */

typedef struct {
    int x, y;
} Ponto;

int main() {
    // Ponto p1 é muito mais direto e fácil de ler
    Ponto p1 = {20, 40};

    printf("Coordenada: %d, %d\n", p1.x, p1.y);
    return 0;
}