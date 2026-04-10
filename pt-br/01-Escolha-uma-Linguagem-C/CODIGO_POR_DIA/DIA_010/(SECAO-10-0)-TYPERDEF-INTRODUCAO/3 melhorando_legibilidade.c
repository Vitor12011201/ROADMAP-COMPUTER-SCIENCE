#include <stdio.h>

/* OBJETIVO: Usar typedef para dar contexto ao significado da variavel.
 */

typedef float Dinheiro;
typedef int Quilometros;

int main() {
    Dinheiro saldo = 1500.75;
    Quilometros distancia = 42;

    printf("Saldo atual: R$ %.2f\n", saldo);
    printf("Distancia percorrida: %d km\n", distancia);

    return 0;
}