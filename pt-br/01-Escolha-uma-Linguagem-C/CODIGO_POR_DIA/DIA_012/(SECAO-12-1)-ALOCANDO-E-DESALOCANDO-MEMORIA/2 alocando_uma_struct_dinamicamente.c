#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Usar malloc para criar estruturas complexas que persistem na memória.
Muito útil para sistemas que criam objetos "sob demanda", como usuários em um site. */

typedef struct {
    int id;
    float preco;
} Produto;

int main() {
    // Alocando espaço para uma struct inteira
    Produto *item = malloc(sizeof(Produto));

    if (item != NULL) {
        item->id = 501;
        item->preco = 19.90;

        printf("Produto %d custa R$%.2f\n", item->id, item->preco);

        free(item);
    }

    return 0;
}