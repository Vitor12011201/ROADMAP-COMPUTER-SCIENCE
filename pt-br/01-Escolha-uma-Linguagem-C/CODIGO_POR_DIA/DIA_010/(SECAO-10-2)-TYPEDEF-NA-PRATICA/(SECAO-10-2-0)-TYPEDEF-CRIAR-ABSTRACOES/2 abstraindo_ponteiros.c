#include <stdio.h>

/* OBJETIVO: Esconder o asterisco (*) em um apelido para facilitar a leitura.
 * Muito usado em estruturas de dados como Listas e Arvores.
 */

struct No {
    int valor;
    struct No *proximo;
};

// 'PonteiroNo' agora significa 'struct No *'
typedef struct No *PonteiroNo;

int main() {
    struct No item = {50, NULL};

    // Em vez de: struct No *p = &item;
    PonteiroNo p = &item;

    printf("Valor via apelido de ponteiro: %d\n", p->valor);

    return 0;
}