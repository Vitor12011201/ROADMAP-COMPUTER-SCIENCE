#include <stdio.h>

/* OBJETIVO: Criar apelidos para tipos basicos como 'unsigned char' ou 'int'.
 */

// Agora 'byte' eh um apelido para 'unsigned char'
typedef unsigned char byte;

// Agora 'inteiro' eh um apelido para 'int'
typedef int inteiro;

int main() {
    byte b = 255;
    inteiro x = 10;

    printf("Byte: %d | Inteiro: %d\n", b, x);

    return 0;
}