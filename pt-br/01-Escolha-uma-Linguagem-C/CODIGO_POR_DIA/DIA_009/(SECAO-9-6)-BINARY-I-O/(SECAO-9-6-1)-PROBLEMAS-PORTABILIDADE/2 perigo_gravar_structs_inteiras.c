#include <stdio.h>

/* OBJETIVO: Mostrar que uma struct pode ser maior do que a soma de seus campos.
 */

struct Exemplo {
    char a;    // 1 byte
    // O compilador pode colocar 3 bytes vazios (padding) aqui!
    int b;     // 4 bytes
};

int main() {
    struct Exemplo e;

    // Se a soma eh 1 + 4 = 5, por que o sizeof diz 8?
    // Porque o arquivo binario levara esses 3 bytes de "lixo" junto.
    printf("Tamanho real da struct: %zu bytes\n", sizeof(e));
    printf("Isso torna o arquivo nao-portavel!\n");

    return 0;
}