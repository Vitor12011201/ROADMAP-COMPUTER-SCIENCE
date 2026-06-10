#include <stdio.h>
#include <limits.h>

/* OBJETIVO: Utilizar o truque lógico do Beej para descobrir, em tempo de compilação,
    se o compilador do seu sistema trata o tipo 'char' padrão como assinado ou não. */

int main() {
    printf("Analise do tipo 'char' deste sistema:\n\n");
    printf("CHAR_MAX  vale: %d\n", CHAR_MAX);
    printf("UCHAR_MAX vale: %d\n", UCHAR_MAX);
    printf("SCHAR_MAX vale: %d\n\n", SCHAR_MAX);

    // Lógica do Beej: Se o máximo do char for igual ao do unsigned char, ele é unsigned.
    if (CHAR_MAX == UCHAR_MAX) {
        printf("Resultado: O seu char padrao eh UNSIGNED (0 a 255).\n");
    } else {
        printf("Resultado: O seu char padrao eh SIGNED (-128 a 127).\n");
    }

    return 0;
}