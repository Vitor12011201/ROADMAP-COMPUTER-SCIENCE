#include <stdio.h>

int main() {
    int numero = 7;

    // x % 2 == 0 checa se o resto da divisão por 2 é zero
    printf("O numero %d e %s.\n", numero, (numero % 2 == 0) ? "par" : "impar");

    return 0;
}