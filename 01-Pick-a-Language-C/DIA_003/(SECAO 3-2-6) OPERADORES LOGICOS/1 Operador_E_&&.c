#include <stdio.h>

// Operador "E" - &&

int main() {
    int idade = 20;
    int tem_carteira = 1; // Verdadeiro

    // Só entra se as DUAS forem verdadeiras
    if (idade >= 18 && tem_carteira) {
        printf("Pode dirigir legalmente.\n");
    } else {
        printf("Nao pode dirigir.\n");
    }

    return 0;
}