#include <stdio.h>

/* OBJETIVO: Percorrer um array usando apenas aritmética de ponteiros e o operador de desreferência (*).
Isso mostra que array[i] é apenas um atalho para *(array + i). */

int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    int *p = numeros; // Aponta para o primeiro elemento (índice 0)

    for (int i = 0; i < 5; i++) {
        // Imprime o valor onde 'p' aponta e depois move 'p' para o próximo int
        printf("Elemento %d: %d (Endereço: %p)\n", i, *p, (void*)p);
        p++;
    }

    return 0;
}