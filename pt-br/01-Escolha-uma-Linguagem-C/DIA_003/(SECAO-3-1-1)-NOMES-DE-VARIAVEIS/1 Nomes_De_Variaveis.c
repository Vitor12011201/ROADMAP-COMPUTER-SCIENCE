#include <stdio.h>

int main() {
    // --- VÁLIDOS ---
    int idade = 25;
    float _temperatura = 36.5;
    int pontuacao_maxima = 1000;
    int valor2 = 50;

    // --- INVÁLIDOS (O compilador vai reclamar) ---
    // int 2valor = 10;      // ERRO: Começa com dígito
    // int float = 5;        // ERRO: 'float' é palavra reservada
    // int valor-total = 20; // ERRO: Hífen não é permitido (C entende como subtração)

    // --- EVITE (Reservados para o sistema/compilador) ---
    int __input;            // Evite: risco de conflito com headers internos
    int _Global;            // Evite: segue o padrão de nomes internos do C

    return 0;
}