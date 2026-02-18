#include <stdio.h>
#include <stdbool.h> // Essencial para usar 'bool'

int main() {
    bool programando = true;
    bool cansado = false;

    if (programando) {
        printf("Continue codando!\n");
    }

    // Curiosidade: Se você imprimir um bool com %d, verá o número 1 ou 0
    printf("Valor de true em numero: %d\n", programando);

    return 0;
}