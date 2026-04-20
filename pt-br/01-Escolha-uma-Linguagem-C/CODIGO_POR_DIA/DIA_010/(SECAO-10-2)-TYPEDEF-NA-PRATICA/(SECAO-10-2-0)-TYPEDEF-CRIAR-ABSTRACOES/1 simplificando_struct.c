#include <stdio.h>

/* OBJETIVO: Criar um tipo de dado "Ponto" que nao exige a palavra 'struct'.
 * Isso torna a declaracao de variaveis muito mais limpa.
 */

typedef struct {
    int x;
    int y;
} Ponto; // O apelido fica no final

int main() {
    // Sem o typedef: struct Ponto p1;
    // Com o typedef:
    Ponto p1 = {10, 20};

    printf("Coordenada: (%d, %d)\n", p1.x, p1.y);

    return 0;
}