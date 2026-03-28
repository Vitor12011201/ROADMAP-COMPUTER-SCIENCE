#include <stdio.h>
#include <string.h>

/* OBJETIVO: Organizar a logica de comparacao dentro de uma funcao reutilizavel.
 * Isso deixa o codigo principal (main) muito mais limpo e legivel.
 */

struct Carro {
    char *nome;
    int velocidade;
};

// Retorna 1 se for igual, 0 se for diferente
int carros_sao_iguais(struct Carro c1, struct Carro c2) {
    if (c1.velocidade != c2.velocidade) return 0;
    if (strcmp(c1.nome, c2.nome) != 0) return 0;

    return 1; // Se passou pelos testes acima, sao iguais
}

int main() {
    struct Carro a = {.nome = "Fusca", .velocidade = 120};
    struct Carro b = {.nome = "Ferrari", .velocidade = 300};

    if (carros_sao_iguais(a, b)) {
        printf("Os carros sao identicos.\n");
    } else {
        printf("Os carros sao distintos.\n");
    }

    return 0;
}