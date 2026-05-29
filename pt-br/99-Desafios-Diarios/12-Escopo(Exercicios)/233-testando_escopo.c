/* Pergunta:
Qual será a saída do programa?*/

#include <stdio.h>

int numero = 100;

void teste() {
    int numero = 50;

    {
        int numero = 10;
        printf("Dentro do bloco: %d\n", numero);
    }

    printf("Dentro da função: %d\n", numero);
}

int main() {
    teste();

    printf("Global: %d\n", numero);

    return 0;
}