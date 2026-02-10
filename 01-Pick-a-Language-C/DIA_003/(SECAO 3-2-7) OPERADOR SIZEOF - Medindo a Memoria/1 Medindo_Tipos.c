#include <stdio.h>

// Para tipos, o uso de parênteses é obrigatório: sizeof(int)

int main() {

    printf("=== TAMANHO DE TIPOS ===\n");
    printf("Tamanho do tipo (int): %zu bytes\n", sizeof (int));
    printf("Tamanho do tipo (double): %zu bytes\n", sizeof (double));
    printf("Tamanho do tipo (char): %zu bytes\n", sizeof (char));

    return 0;
}