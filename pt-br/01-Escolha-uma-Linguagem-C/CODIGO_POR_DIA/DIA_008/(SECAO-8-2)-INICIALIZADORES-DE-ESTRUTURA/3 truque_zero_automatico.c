#include <stdio.h>

struct Smartphone {
    char *modelo;
    int ram;
    int armazenamento;
};

int main() {
    // Inicializamos apenas o modelo; os outros campos serao 0
    struct Smartphone s1 = {.modelo = "Iphone 16 - Apple"};

    printf("Modelo: %s\n", s1.modelo);
    printf("RAM: %d GB\n", s1.ram); // Iniciado como zero
    printf("Memoria: %d GB\n", s1.armazenamento); // Iniciado como zero

    return 0;
}