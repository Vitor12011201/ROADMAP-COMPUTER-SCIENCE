#include <stdio.h>

/* OBJETIVO: Demonstrar como declarar o mesmo valor numérico usando
   as bases Decimal, Hexadecimal (0x) e Binária (0b), e como exibi-los
   com os formatadores corretos do printf. */

int main() {
    // Todos os valores abaixo representam exatamente o número 42 na memória RAM
    int dec = 42;
    int hex = 0x2A;    // 2 * 16 + 10 = 42 (maiúsculas ou minúsculas funcionam: 0x2a)
    int bin = 0b101010; // Extensão amplamente aceita (C23/GCC/Clang)

    printf("--- Exibindo o número 42 de várias formas ---\n");
    printf("Em base decimal:     %d\n", dec);
    printf("Em base hexadecimal: %x (usando %%x)\n", hex);
    printf("Em base hexadecimal: %X (usando %%X em maiúsculo)\n", hex);

    // Provando que para a CPU eles são rigorosamente a mesma coisa:
    if (dec == hex && hex == bin) {
        printf("\nConfirmado: Todos ocupam os mesmos bits no registrador!\n");
    }

    return 0;
}