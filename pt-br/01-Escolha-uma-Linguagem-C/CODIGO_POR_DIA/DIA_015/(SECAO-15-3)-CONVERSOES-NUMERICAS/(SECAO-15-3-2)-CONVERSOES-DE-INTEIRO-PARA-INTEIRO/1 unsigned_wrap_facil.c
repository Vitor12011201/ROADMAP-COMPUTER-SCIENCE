#include <stdio.h>

/* OBJETIVO: Demonstrar o efeito hodômetro garantido por lei pelo padrão C
   ao estourar o limite máximo de um tipo 'unsigned char' (0 a 255). */

int main() {
    // O valor 258 excede o limite máximo de 255 em exatamente 3 unidades (256, 257, 258)
    // O C aplica a matemática: 258 % (2^8) -> 258 % 256 = 2
    unsigned char limitador_unsigned = 258;

    printf("--- Teste de Estouro Unsigned (Garantido) ---\n");
    printf("Valor esperado no estouro: 2\n");
    printf("Valor real armazenado:    %d\n", limitador_unsigned);

    return 0;
}