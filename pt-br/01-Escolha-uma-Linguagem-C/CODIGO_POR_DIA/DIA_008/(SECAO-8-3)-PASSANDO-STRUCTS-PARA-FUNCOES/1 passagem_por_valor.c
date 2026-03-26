#include <stdio.h>

/* OBJETIVO: Demonstrar a passagem de struct por valor.
 * A funcao recebe uma COPIA. Alterar a copia nao muda o original na main.
 */

struct Carro {
    char *nome;
    float preco;
};

void tentar_mudar_preco(struct Carro c) {
    c.preco = 500.00; // Altera apenas a copia local da funcao
}

int main() {
    struct Carro saturn = {.nome = "Saturn SL/2", .preco = 16000.99};

    tentar_mudar_preco(saturn);

    // O preco continua 16000.99 porque passamos por valor
    printf("Preco original: %.2f\n", saturn.preco);

    return 0;
}