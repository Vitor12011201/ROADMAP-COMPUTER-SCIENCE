#include <stdio.h>

/* OBJETIVO: Utilizar literais hexadecimais (prefixo 0x) combinados com sufixos.
   Hexadecimais possuem regras de promoção ligeiramente diferentes em C (eles tentam
   se encaixar em unsigned antes de pular para tipos maiores), sendo vital o controle de sufixos. */

int main() {
    // 0xFF representa o número 255 em decimal (todos os 8 bits de um byte ativos: 11111111)
    // Muito utilizado em bitmasks para isolar bytes de dados de rede (como no protocolo Sunshine)
    unsigned int mascara_limpa = 0xFFU;

    // Forçando uma máscara de 64 bits usando o sufixo UL (Unsigned Long)
    // Isso garante que o compilador use registradores de 64 bits para a operação de bits
    unsigned long mascara_longa = 0xFFFFFFFFUL;

    printf("Mascara 1 (Decimal): %u\n", mascara_limpa);
    printf("Mascara 2 (Decimal): %lu\n", mascara_longa);
    printf("Tamanho da mascara longa: %zu bytes\n", sizeof(0xFFFFFFFFUL));

    return 0;
}