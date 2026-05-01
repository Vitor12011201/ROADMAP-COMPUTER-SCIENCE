#include <stdio.h>

/* OBJETIVO: Encontrar a posição (índice) de um valor dentro de um array
   subtraindo o ponteiro encontrado do ponteiro inicial. */

int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    int *inicio = numeros;
    int *alvo = &numeros[3]; // Aponta para o 40

    // Quantos 'ints' existem entre o início e o alvo?
    int distancia = alvo - inicio;

    printf("O valor %d esta no indice: %d\n", *alvo, distancia);
    return 0;
}