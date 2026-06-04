#include <stdio.h>

/* OBJETIVO: Demonstrar o uso do modificador 'unsigned' (sem sinal).
   Ao remover a capacidade de armazenar números negativos, dobramos a
   capacidade positiva do tipo na memória Stack. */

int main() {
    // Um int normal (signed) vai de cerca de -2 bilhões a +2 bilhões
    int saldo_negativo = -50;

    // Um unsigned int vai de 0 até cerca de 4 bilhões
    unsigned int visitantes_site = 4294967295U; // Valor máximo para 32 bits

    printf("Saldo: %d\n", saldo_negativo);
    printf("Visitantes no nuppac.net: %u\n", visitantes_site);

    // CUIDADO: Se tentar colocar um número negativo em um unsigned:
    unsigned int erro = -1;
    printf("O que acontece com -1 no unsigned: %u (Overflow!)\n", erro);

    return 0;
}