#include <stdio.h>

int main ()
{
    int n_1 = 5;
    int n_2 = 5;

    // Pós-incremento: Usa o valor atual (5) e depois "agenda" o aumento.
    // O compilador pode interpretar como (5 + 5), resultando em 10.
    printf("n_1: %d\n" , n_1++ + n_1++);

    // Pré-incremento: Aumenta o valor ANTES de usar na conta.
    // n_2 aumenta para 6, depois para 7. A conta vira (7 + 7), resultando em 14.
    printf("n_2: %d\n" , ++n_2 + ++n_2);

    return 0;
}