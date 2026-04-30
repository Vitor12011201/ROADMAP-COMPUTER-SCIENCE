#include <stdio.h>

/* OBJETIVO: Percorrer um array modificando o valor do ponteiro (p++) até encontrar
   um valor específico (sentinela), sem usar um contador 'i'. */

int main() {
    int a[] = {11, 22, 33, 44, 55, 999};
    int *p = a; // Aponta para o primeiro elemento (11)

    // O loop continua enquanto o CONTEÚDO de p for diferente de 999
    while (*p != 999) {
        printf("Valor: %d | Endereço: %p\n", *p, (void*)p);

        p++; // Modifica o ponteiro para o PRÓXIMO endereço de int
    }

    printf("Fim! O ponteiro parou no valor: %d\n", *p);
    return 0;
}