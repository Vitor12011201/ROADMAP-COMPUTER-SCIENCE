#include <stdio.h>

/* OBJETIVO: Utilizar o operador de seta dentro de uma funcao para alterar a struct original.
 * Esta eh a forma mais comum de usar o '->' na programacao C real.
 */

struct Carro {
    char *nome;
    int velocidade;
};

// A funcao recebe o ponteiro 'c' para nao precisar copiar a struct inteira
void atualizar_velocidade(struct Carro *c, int nova_velocidade) {
    // Va ate o endereco de 'c' e mude o campo 'speed'
    c->velocidade = nova_velocidade;
}

int main() {
    struct Carro saturn = {.nome = "Saturn SL/2", .velocidade = 175};

    // Passamos o endereco (&) para a funcao
    atualizar_velocidade(&saturn, 200);

    printf("Velocidade Atualizada: %d km/h\n", saturn.velocidade);

    return 0;
}