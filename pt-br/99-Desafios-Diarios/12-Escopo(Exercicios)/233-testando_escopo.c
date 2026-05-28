/*
Pergunta:
Qual será a saída do programa?*/

#include <stdio.h> m

int numero = 100; // variável global

void teste() {
    int numero = 50; // variável local da função

    {
        int numero = 10; // variável local do bloco
        printf("Dentro do bloco: %d\n", numero);
    }

    printf("Dentro da função: %d\n", numero);
}

int main() {
    teste();

    printf("Global: %d\n", numero);

    return 0;
}