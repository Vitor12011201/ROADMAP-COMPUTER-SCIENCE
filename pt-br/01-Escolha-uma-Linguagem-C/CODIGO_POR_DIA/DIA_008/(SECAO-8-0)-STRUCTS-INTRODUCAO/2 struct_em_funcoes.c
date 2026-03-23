#include <stdio.h>

struct Carro {
    char marca[20];
    int ano;
};

/*
 * Objetivo: Mostrar como o código fica mais legivel ao agrupar dados.
 */
void exibir_carro(struct Carro c) {
    printf("Carro: %s | Ano: %d\n", c.marca, c.ano);
}

int main() {
    struct Carro meu_carro = {"BMW-I7", 2026};

    // Passamos apenas UMA variavel (a struct) em vez de duas
    exibir_carro(meu_carro);

    return 0;
}