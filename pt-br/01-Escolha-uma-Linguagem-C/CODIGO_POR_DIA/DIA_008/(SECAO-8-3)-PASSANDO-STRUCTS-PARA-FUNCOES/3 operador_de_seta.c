#include <stdio.h>

/* OBJETIVO: Usar o operador de seta (->) para acessar membros via ponteiro.
 * É a forma padrao e mais legivel em C para manipular structs em funcoes.
 */

struct Carro {
    char *nome;
    float preco;
};

void definir_preco_seta(struct Carro *c, float novo_preco) {
    // O operador '->' substitui o feio '(*c).'
    // Ele diz: "Va ate onde 'c' aponta e mude o 'preco'"
    c->preco = novo_preco;
}

int main() {
    struct Carro saturn = {.nome = "Saturn SL/2", .preco = 0.0};

    // Novamente, passamos o endereco (&)
    definir_preco_seta(&saturn, 950.00);

    printf("Preco Final (via seta): %.2f\n", saturn.preco);

    return 0;
}