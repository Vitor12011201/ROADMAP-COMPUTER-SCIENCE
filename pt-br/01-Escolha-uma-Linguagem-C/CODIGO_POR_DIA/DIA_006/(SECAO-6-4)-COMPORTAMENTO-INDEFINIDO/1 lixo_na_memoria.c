#include <stdio.h>

/**
 * Acessando Memória Fora do Array
 * Objetivo: Demonstrar o Comportamento Indefinido e o "Lixo de Memoria".
 * AVISO: Nao use este tipo de acesso em projetos reais!
 */

int main() {
    int seguros[3] = {10, 20, 30};

    printf("--- Acessando indices validos ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Indice %d: %d\n", i, seguros[i]);
    }

    printf("\n--- Cruzando a fronteira (Perigo!) ---\n");
    // Vamos tentar ler o que esta logo depois do array na memoria
    for (int i = 3; i < 6; i++) {
        printf("Indice %d (Lixo): %d\n", i, seguros[i]);
    }

    return 0;
}