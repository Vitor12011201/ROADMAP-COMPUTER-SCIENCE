#include <stdio.h>

// OBJETIVO: Inicializar a struct seguindo a ordem exata da declaracao dos campos.
//Este metodo eh rapido, mas exige que voce saiba a ordem exata definida na struct.

struct Smartphone {
    char *marca;
    int memoria_gb;
    float preco;
};

int main() {
    // Inicializacao na ORDEM exata da declaracao da struct
    // "Samsung" -> marca | 128 -> memoria | 2500.00 -> preco
    struct Smartphone s1 = {"Samsung", 128, 2500.00};

    printf("Smartphone 1: %s, %dGB, R$ %.2f\n", s1.marca, s1.memoria_gb, s1.preco);

    return 0;
}