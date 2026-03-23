#include <stdio.h>

/*
 * Objetivo: Agrupar dados de tipos diferentes em uma unica unidade.
 */
struct Personagem {
    char nome[50];
    int nivel;
    float saude;
};

int main() {
    // Criando uma instancia da struct e inicializando
    struct Personagem player1 = {"Bebeto", 10, 100.0f};

    printf("--- Status do Jogador ---\n");
    // Usamos o operador PONTO (.) para acessar os membros
    printf("Nome:   %s\n", player1.nome);
    printf("Nivel:  %d\n", player1.nivel);
    printf("Saude:  %.1f%%\n", player1.saude);

    return 0;
}