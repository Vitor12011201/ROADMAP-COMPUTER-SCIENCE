#include <stdio.h>

/* OBJETIVO: Usar typedef para nao precisar escrever 'struct' sempre.
 */

// Definimos a struct e ja damos o apelido 'Ponto' para ela
typedef struct {
    int x;
    int y;
} Ponto;

int main() {
    // Sem o typedef, voce teria que escrever: struct Ponto p1;
    Ponto p1 = {10, 20};

    printf("Coordenadas: %d, %d\n", p1.x, p1.y);

    return 0;
}