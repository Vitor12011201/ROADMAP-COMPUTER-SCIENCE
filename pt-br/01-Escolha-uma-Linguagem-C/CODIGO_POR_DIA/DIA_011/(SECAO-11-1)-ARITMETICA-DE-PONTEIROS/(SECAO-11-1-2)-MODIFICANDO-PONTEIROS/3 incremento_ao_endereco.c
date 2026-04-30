#include <stdio.h>

/* OBJETIVO: Usar a forma compacta *p++, muito comum em códigos profissionais de C,
   que lê o valor e move o ponteiro em uma única linha. */

int main() {
    int a[] = {5, 10, 15, 0}; // 0 é o sentinela
    int *p = a;

    // Lê o valor atual, e DEPOIS incrementa o endereço
    while (*p != 0) {
        printf("Processando: %d\n", *p++);
    }

    return 0;
}