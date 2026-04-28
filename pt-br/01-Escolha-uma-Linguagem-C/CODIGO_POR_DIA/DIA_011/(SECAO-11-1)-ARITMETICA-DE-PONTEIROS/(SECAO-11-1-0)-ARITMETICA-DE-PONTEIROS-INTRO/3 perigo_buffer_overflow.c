#include <stdio.h>

/* OBJETIVO: Ilustrar o perigo de mover um ponteiro para além do limite permitido.
Acessar memória inválida pode resultar em lixo ou no famoso Segmentation Fault. */

int main() {
    int valores[2] = {100, 200};
    int *ptr = valores;

    printf("Valor 0: %d\n", *ptr);
    ptr++; // Agora aponta para o valor 200
    printf("Valor 1: %d\n", *ptr);

    ptr++; // PERIGO: Agora aponta para uma memória que não pertence ao array!

    // Tentar ler aqui é Comportamento Indefinido (Undefined Behavior)
    printf("Valor inválido: %d (Lixo de memória ou Crash)\n", *ptr);

    return 0;
}