#include <stdio.h>

/* OBJETIVO: Observar o comportamento definido pela implementação ao estourar
   um tipo assinado (short). Mostrar como o truncamento de bits na arquitetura
   x86/ARM transforma um número positivo em negativo devido ao Complemento de Dois. */

int main() {
    // Um short assinado armazena de -32768 até 32767
    int numero_original = 32769;

    // Forçando a entrada de 32769 em um espaço que só vai até 32767
    // Na maioria dos compiladores modernos, os bits superiores são decepados
    short destino_assinado = numero_original;

    printf("--- Teste de Estouro Signed (Dependente de Arquitetura) ---\n");
    printf("Número original em 32 bits (int):   %d\n", numero_original);

    /* O bit de sinal do short (bit 15) acaba sendo ativado pelo truncamento,
       fazendo o número virar negativo na representação de Complemento de Dois. */
    printf("Número truncado em 16 bits (short): %d\n", destino_assinado);

    return 0;
}