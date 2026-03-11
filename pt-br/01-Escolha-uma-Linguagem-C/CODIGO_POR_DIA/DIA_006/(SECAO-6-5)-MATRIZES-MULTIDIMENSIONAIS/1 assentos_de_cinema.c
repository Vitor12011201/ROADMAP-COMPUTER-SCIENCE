#include <stdio.h>

/**
 * Sistema de Reserva de Cinema
 * Objetivo: Demonstrar o uso de matrizes para controle de ocupação.
 * 0 = Disponível | 1 = Reservado
 */

int main() {
    // Matriz 4x4 representando as fileiras e colunas do cinema
    int cinema[4][4] = {0}; // Inicializa todos os assentos como disponíveis (0)

    // Fazendo algumas reservas manuais usando índices [linha][coluna]
    cinema[0][0] = 1;
    cinema[1][2] = 1;
    cinema[2][3] = 1;
    cinema[3][0] = 1;

    printf("--- MAPA DE ASSENTOS (1 = Ocupado) ---\n");
    for (int i = 0; i < 4; i++) {
        printf("Fileira %d: ", i);
        for (int j = 0; j < 4; j++) {
            printf("[%d] ", cinema[i][j]);
        }
        printf("\n");
    }

    return 0;
}