#include <stdio.h>

/* OBJETIVO: Resolver a limitação do printf, que não possui um caractere de
   formatação nativo para binário. Construir uma função baseada em operadores
   de bits (Bitwise Shifts) para ler e imprimir os bits reais de um byte. */

void imprimir_byte_binario(unsigned char byte) {
    // Um loop que começa do bit mais significativo (bit 7) até o menos significativo (bit 0)
    for (int i = 7; i >= 0; i--) {
        // Desloca o bit alvo para a posição do ponteiro de leitura e isola com a máscara '& 1'
        int bit = (byte >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    // Definindo uma máscara de bits muito comum em redes e drivers (0x5A)
    unsigned char mascara_controle = 0x5A; // 90 em decimal

    printf("--- Analisador de Bits de Hardware ---\n");
    printf("Valor em Decimal:     %d\n", mascara_controle);
    printf("Valor em Hexadecimal: 0x%X\n", mascara_controle);

    printf("Representação Binária Real na RAM: ");
    imprimir_byte_binario(mascara_controle);

    return 0;
}