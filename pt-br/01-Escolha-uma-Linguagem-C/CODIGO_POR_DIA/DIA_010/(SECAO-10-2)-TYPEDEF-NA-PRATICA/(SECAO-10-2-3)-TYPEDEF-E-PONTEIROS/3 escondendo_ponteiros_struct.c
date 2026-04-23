#include <stdio.h>

/* OBJETIVO: Usar typedef para abstrair ponteiros de estruturas complexas.
   Isso é muito comum em bibliotecas para esconder que estamos lidando
   diretamente com endereços de memória. */

typedef struct No {
    int dado;
    struct No *proximo;
} *NodePtr; // Aqui o '*' está no apelido!

int main() {
    struct No item = {100, NULL};

    // NodePtr já é um ponteiro para a struct No
    NodePtr lista = &item;

    printf("Dado no nó: %d\n", lista->dado);
    return 0;
}