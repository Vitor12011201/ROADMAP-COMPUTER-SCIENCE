#include <stdio.h>

/* OBJETIVO: Demonstrar como uma funcao pode fabricar e retornar uma struct inteira.
 * Ao retornar, o C cria uma copia da struct da funcao para a variavel na main.
 */

struct Carro {
    char *nome;
    int velocidade;
};

struct Carro criar_carro_padrao() {
    struct Carro novo = {.nome = "Modelo Base", .velocidade = 100};

    // Retornamos a struct inteira (valor), nao o ponteiro
    return novo;
}

int main() {
    struct Carro meu_carro;

    // A variavel recebe a copia do que foi criado dentro da funcao
    meu_carro = criar_carro_padrao();

    printf("Carro Criado: %s | Velocidade: %d\n", meu_carro.nome, meu_carro.velocidade);

    return 0;
}