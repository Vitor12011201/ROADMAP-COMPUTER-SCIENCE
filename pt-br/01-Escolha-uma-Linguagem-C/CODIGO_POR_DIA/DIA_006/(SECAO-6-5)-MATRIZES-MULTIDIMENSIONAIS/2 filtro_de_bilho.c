#include <stdio.h>

/**
 * Processamento de Imagem Simulado
 * Objetivo: Mostrar como aplicar uma operação matemática em todos os
 * elementos de uma matriz (Iteração Completa).
 */

int main() {
    // Uma "imagem" onde cada número representa a intensidade do pixel (0-255)
    int imagem[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int brilho = 50;

    printf("--- Imagem Original ---\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%3d ", imagem[i][j]);
            // Aplicando o "filtro de brilho"
            imagem[i][j] += brilho;
        }
        printf("\n");
    }

    printf("\n--- Imagem com Brilho (+50) ---\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%3d ", imagem[i][j]);
        }
        printf("\n");
    }

    return 0;
}