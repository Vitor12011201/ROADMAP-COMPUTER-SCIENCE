#include <stdio.h>

/**
 * Estilo Profissional (*a)
 * Usa 'float *' para mostrar que aceita qualquer bloco de floats.
 */
void aplicar_reajuste(float *salarios, int qtd, float multiplicador) {
    for (int i = 0; i < qtd; i++) {
        salarios[i] *= multiplicador; // Note que usamos colchetes mesmo no ponteiro!
    }
}

int main() {
    float lista[] = {1500.0, 2800.0, 4200.0};
    aplicar_reajuste(lista, 3, 1.10); // Aumenta 10%

    printf("Salario reajustado: %.2f\n", lista[0]);
    return 0;
}