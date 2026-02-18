#include <stdio.h>

// Operador "OU" - ||

int main() {
    int tem_dinheiro = 0;
    int tem_cartao = 1;

    // Entra se pelo menos UMA for verdadeira
    if (tem_dinheiro || tem_cartao) {
        printf("Pode comprar o lanche!\n");
    }

    return 0;
}