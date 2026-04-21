#include <stdio.h>

/* OBJETIVO: Definir a struct e o apelido na mesma declaração.
   Economiza espaço e mantém a organização, permitindo ainda o uso da palavra 'struct'. */

typedef struct Veiculo {
    char *tipo;
    int rodas;
} veiculo_t;

int main() {
    veiculo_t v1 = {"Moto", 2};
    struct Veiculo v2 = {"Carro", 4}; // Ainda funciona!

    printf("Um(a) %s tem %d rodas.\n", v1.tipo, v1.rodas);
    return 0;
}