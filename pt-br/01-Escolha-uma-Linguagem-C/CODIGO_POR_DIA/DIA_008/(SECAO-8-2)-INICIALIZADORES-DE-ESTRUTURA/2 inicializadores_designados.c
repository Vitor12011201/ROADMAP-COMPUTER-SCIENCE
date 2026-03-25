#include <stdio.h>

// Objetivo: Demonstrar como inicializar campos específicos por nome (.campo), tornando o código imune a mudanças na ordem da struct.

struct Carro {
    char *nome;
    float preco;
    int velocidade;
};

int main() {
    // Usamos o ponto (.) para escolher qual campo preencher, ignorando a ordem
    struct Carro c2 = {.velocidade = 220, .nome = "Ferrari"};

    // Note que o .preco foi ignorado e sera automaticamente 0.00
    printf("Nome: %s | Vel: %d | Preco: %.2f\n", c2.nome, c2.velocidade, c2.preco);
    return 0;
}