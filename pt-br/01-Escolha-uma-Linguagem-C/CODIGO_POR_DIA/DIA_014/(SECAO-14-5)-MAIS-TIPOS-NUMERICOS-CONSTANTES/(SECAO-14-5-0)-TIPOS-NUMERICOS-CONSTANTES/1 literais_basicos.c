#include <stdio.h>

/* OBJETIVO: Demonstrar que constantes numéricas puras nascem como 'int' por padrão.
   Mostrar como usar o sufixo 'U' (ou 'u') para forçar o compilador a tratar o literal
   como um tipo sem sinal (unsigned int). */

int main() {
    // Por padrão, o número 4200000000 ultrapassa o limite máximo de um 'int' de 32 bits assinado.
    // O compilador tentará jogá-lo para um tipo maior automaticamente (como long ou long long).

    // Usando o sufixo U, garantimos explicitamente que ele nasça como Unsigned Int
    unsigned int conexoes_ativas = 4000000000U;

    printf("Numero forçado como Unsigned: %u\n", conexoes_ativas);
    printf("Tamanho ocupado pelo literal: %zu bytes\n", sizeof(4000000000U));

    return 0;
}