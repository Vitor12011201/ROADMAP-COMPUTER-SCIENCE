#include <stdio.h>

// O sizeof olha para o resultado final da conta e diz quanto espaço o tipo desse resultado ocupa.

int main() {
    // 2 + 7 resulta em um 'int', que geralmente ocupa 4 bytes
    printf("Tamanho de (2 + 7): %zu bytes\n", sizeof(2 + 7));

    // 3.14 literal e tratado como 'double' pelo C, ocupando 8 bytes
    printf("Tamanho do numero 3.14: %zu bytes\n", sizeof 3.14);

    return 0;
}