#include <stdio.h>

/* OBJETIVO: Passar um ponteiro para a struct e usar a desreferencia (*c).
 * Isso permite que a funcao altere o valor real que esta na memoria da main.
 */

struct Carro {
    char *nome;
    float preco;
};

void definir_preco_manual(struct Carro *c, float novo_preco) {
    // Usamos paranteses para garantir que o C primeiro chegue na struct
    // e depois acesse o campo .preco
    (*c).preco = novo_preco;
}

int main() {
    struct Carro saturn = {.nome = "Saturn SL/2", .preco = 0.0};

    // Passamos o ENDERECO (&) da struct para o ponteiro
    definir_preco_manual(&saturn, 799.99);

    printf("Novo Preco (via desreferencia): %.2f\n", saturn.preco);

    return 0;
}