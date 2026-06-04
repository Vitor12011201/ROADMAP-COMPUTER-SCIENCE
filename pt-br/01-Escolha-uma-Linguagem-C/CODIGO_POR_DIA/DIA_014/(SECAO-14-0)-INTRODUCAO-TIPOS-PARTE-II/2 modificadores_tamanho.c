#include <stdio.h>

/* OBJETIVO: Utilizar os modificadores 'short' e 'long long' para otimizar
   o uso de memória ou permitir o armazenamento de números massivos. */

int main() {
    // 'short' garante um inteiro menor (geralmente 16 bits / 2 bytes)
    // Perfeito para economizar memória em hardware limitado (como TV Boxes)
    short int idade_planeta_em_meses = 120;

    // 'long long' garante um inteiro gigante (geralmente 64 bits / 8 bytes)
    // Necessário para IDs astronômicos ou contagem de bytes de arquivos grandes
    long long int bytes_transferidos_streaming = 9223372036854775807LL;

    printf("Tamanho do short: %zu bytes | Valor: %d\n",
            sizeof(idade_planeta_em_meses), idade_planeta_em_meses);

    printf("Tamanho do long long: %zu bytes | Valor: %lld\n",
            sizeof(bytes_transferidos_streaming), bytes_transferidos_streaming);

    return 0;
}