#include <stdio.h>

int main() {
    int x = 15;
    int y = 100;

    // Se x for maior que 10, soma 17. Senão, soma 37.
    y += (x > 10) ? 17 : 37;

    printf("O valor de y agora e: %d\n", y); // Vai imprimir 117

    return 0;
}