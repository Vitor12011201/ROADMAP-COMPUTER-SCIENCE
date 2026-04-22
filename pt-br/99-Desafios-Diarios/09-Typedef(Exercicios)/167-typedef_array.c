/*Objetivo: Praticar o typedef de arrays. Isso é útil para garantir que um conjunto de dados sempre tenha o mesmo tamanho em todo o programa.
1. Use o typedef para criar um tipo chamado Notas que seja um array de 3 floats:
typedef float Notas[3];
2. No main, declare uma variável: Notas minhas_notas = {8.5, 7.0, 9.2};.
3. Crie um loop para imprimir as 3 notas e, ao final, calcule a média delas.*/

#include <stdio.h>

typedef float Notas[3];

int main() {

    Notas minhas_notas = {8.5 , 7.0 , 9.2};

    for (int i = 0; i < 3; i++) {
        printf("A minha nota [%d] e: %.2f\n", i + 1, minhas_notas[i]);
    }

    return 0;
}