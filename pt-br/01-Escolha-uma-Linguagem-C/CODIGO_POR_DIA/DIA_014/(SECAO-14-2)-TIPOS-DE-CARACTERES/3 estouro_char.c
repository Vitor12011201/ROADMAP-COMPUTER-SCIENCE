#include <stdio.h>

/* OBJETIVO: Explorar os limites numéricos do 'unsigned char' (0 a 255).
   Usar este tipo como um contador numérico de 1 byte economiza muita RAM,
   mas exige cuidado extremo com o estouro de capacidade (overflow). */

int main() {
    // unsigned char usa exatamente 1 byte e vai de 0 a 255
    unsigned char contador = 255;

    printf("Valor inicial do char: %d\n", contador);

    // O que acontece se somarmos 1 ao limite de 255?
    contador = contador + 1;

    // Assim como os inteiros grandes, ele "dá a volta" no relógio de bits e reseta para 0
    printf("Valor apos o estouro (255 + 1): %d\n", contador);

    // Exemplo prático: Varrendo os bits de um byte (0 a 255) de forma segura
    printf("\nImprimindo os codigos de uma pequena faixa controlada:\n");
    unsigned char i = 240;
    while (1) {
        printf("Codigo: %d -> Caractere: %c\n", i, i);

        if (i == 245) {
            break; // Interrompe antes de deixar o loop rodar infinitamente por overflow
        }
        i++;
    }

    return 0;
}