#include <stdio.h>

/* OBJETIVO: Usar o sufixo '_t' em letras minúsculas (snake_case).
   Este padrão imita a biblioteca padrão do C e é muito comum em sistemas Linux/Unix. */

typedef struct {
    int id;
    float preco;
} produto_t;

int main() {
    produto_t p1 = {101, 4.50};
    printf("Produto ID: %d\n", p1.id);
    return 0;
}