#include "stdio.h"

//Pense no pós-incremento como: "Use o valor agora e mude depois".

int main() {
    int i = 10;
    int j;

    // Primeiro ele faz 5 + 10 = 15. Salva 15 em j.
    // SÓ DEPOIS disso o i vira 11.
    j = 5 + i++;

    printf("--- POS-INCREMENTO ---\n");
    printf("Valor de j (usou i antigo): %d\n", j); // 15
    printf("Valor de i (mudou depois): %d\n", i);  // 11

    return 0;
}