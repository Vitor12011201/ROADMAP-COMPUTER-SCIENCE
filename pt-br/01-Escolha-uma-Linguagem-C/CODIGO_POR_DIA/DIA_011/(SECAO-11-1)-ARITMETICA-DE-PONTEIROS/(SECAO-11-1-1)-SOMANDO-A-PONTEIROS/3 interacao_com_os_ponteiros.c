#include <stdio.h>

/* OBJETIVO: Percorrer um array movendo o ponteiro original (p++).
   Diferente de *(p + i), aqui o endereço guardado em 'p' muda a cada volta. */

int main() {
    int a[5] = {11, 22, 33, 44, 55};
    int *p = a;

    printf("Elementos do array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *p); // Imprime onde p aponta agora
        p++;               // Move p para o próximo endereço de int
    }
    printf("\n");

    return 0;
}