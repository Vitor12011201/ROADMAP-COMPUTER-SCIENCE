#include <stdio.h>

/* OBJETIVO: Implementar strlen() usando a distância entre o ponteiro do início
   e o ponteiro que encontrou o terminador NUL ('\0'). */

int meu_strlen(char *s) {
    char *p = s;

    // Move 'p' até o final da string
    while (*p != '\0') {
        p++;
    }

    // A subtração retorna quantos 'chars' existem entre os dois endereços
    return p - s;
}

int main() {
    char *texto = "C e incrivel";
    printf("Comprimento: %d\n", meu_strlen(texto));
    return 0;
}