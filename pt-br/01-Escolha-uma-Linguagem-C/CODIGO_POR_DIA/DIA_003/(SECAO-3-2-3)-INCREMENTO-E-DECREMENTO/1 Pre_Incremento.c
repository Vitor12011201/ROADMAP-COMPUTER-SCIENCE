#include <stdio.h>

int main() {
    int i = 10;
    int j;

    // Primeiro o i vira 11.
    // DEPOIS ele faz 5 + 11 = 16. Salva 16 em j.
    j = 5 + ++i;

    printf("--- PRE-INCREMENTO ---\n");
    printf("Valor de j (usou i novo): %d\n", j); // 16
    printf("Valor de i (mudou antes): %d\n", i); // 11

    return 0;
}