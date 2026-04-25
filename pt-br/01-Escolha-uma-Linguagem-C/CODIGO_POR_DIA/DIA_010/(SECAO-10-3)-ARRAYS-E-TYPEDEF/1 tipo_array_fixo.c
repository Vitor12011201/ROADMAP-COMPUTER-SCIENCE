#include <stdio.h>

/* OBJETIVO: Criar um apelido para um array de inteiros com tamanho fixo.
   Isso permite declarar listas de tamanho específico sem usar colchetes na variável. */

typedef int Notas[4]; // 'Notas' agora significa 'int[4]'

int main() {
    // 'minhas_notas' é um array de 4 posições automaticamente
    Notas minhas_notas = {10, 8, 9, 7};

    for(int i = 0; i < 4; i++) {
        printf("Nota %d: %d\n", i + 1, minhas_notas[i]);
    }

    return 0;
}