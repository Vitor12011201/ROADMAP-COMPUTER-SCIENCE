#include <stdio.h>
#include <stdbool.h>

int main() {
    int valor = 12;

    // Teste 1: Lógica de decisão
    if (valor) {
        printf("Para o IF, o 12 funciona como verdadeiro.\n");
    }

    // Teste 2: Comparação matemática
    if (valor == true) {
        printf("Isso nao vai aparecer.\n");
    } else {
        printf("O computador diz: 12 nao e igual a 1 (true).\n");
    }

    // Teste 3: O que acontece por baixo dos panos?
    printf("Valor de true: %d\n", true);
    printf("Resultado de (12 == 1): %d\n", (12 == 1));

    return 0;
}