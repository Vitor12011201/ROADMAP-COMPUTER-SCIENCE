#include <stdio.h>


// A função acessa o endereço original e zera qualquer valor negativo.

void zerar_negativos(int *dados, int len) {
    for (int i = 0; i < len; i++) {
        if (dados[i] < 0) {
            dados[i] = 0; // Altera o valor original na memória
        }
    }
}

int main() {
    int sensores[] = {10, -5, 20, -1, 30};

    zerar_negativos(sensores, 5);

    printf("Dados limpos: ");
    for (int i = 0; i < 5; i++) printf("%d ", sensores[i]);
    // Saída: 10 0 20 0 30
    return 0;
}