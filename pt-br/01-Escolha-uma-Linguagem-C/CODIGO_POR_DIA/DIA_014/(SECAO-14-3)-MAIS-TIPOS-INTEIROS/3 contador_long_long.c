#include <stdio.h>
#include <limits.h>

/* OBJETIVO: Simular o monitoramento de transferência de dados em larga escala.
   Demonstrar que um 'int' normal falharia por estouro (overflow) ao passar de 2 bilhões,
   sendo obrigatório o uso de 'unsigned long long' para contadores massivos. */

int main() {
    // Simulando um cenário de bytes transmitidos em alta performance
    // O sufixo 'ULL' avisa ao compilador que a constante é Unsigned Long Long
    unsigned long long bytes_transmitidos = 18446744073709551610ULL;

    printf("Iniciando monitoramento de grandes volumes de dados...\n");

    // Simulando a chegada de mais pacotes de dados de rede
    for (int i = 0; i < 10; i++) {
        bytes_transmitidos++;

        // Imprimindo com o formatador correto para unsigned long long (%llu)
        printf("Total acumulado: %llu bytes\n", bytes_transmitidos);

        // Verificando se chegamos no limite absoluto do hardware
        if (bytes_transmitidos == ULLONG_MAX) {
            printf("\n[ALERTA] O contador atingiu o limite maximo de 64-bits (%llu)!\n", ULLONG_MAX);
        }
    }

    return 0;
}