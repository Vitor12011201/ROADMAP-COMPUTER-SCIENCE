#include <stdio.h>

/* OBJETIVO: Mostrar que char *s e char s[] são exatamente a mesma coisa para o compilador dentro dos parâmetros de uma função.
 Ambos recebem apenas um endereço de memória. */

// Ambas as funcoes sao validas e fazem a mesma coisa:
void imprimir_com_ponteiro(char *s) {
    printf("Via ponteiro: %s\n", s);
}

void imprimir_com_array(char s[]) {
    printf("Via array: %s\n", s);
}

int main() {
    char texto[] = "Senior Dev";

    imprimir_com_ponteiro(texto);
    imprimir_com_array(texto);

    return 0;
}