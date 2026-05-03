#include <stdio.h>

/* OBJETIVO: Demonstrar que uma função que espera um ponteiro aceita tanto um array literal,
  quanto uma variável ponteiro ou até um endereço específico no meio de um array. */

void mostrar_primeiro_char(char *c) {
    printf("O caractere eh: %c\n", *c);
}

int main() {
    char s[] = "Sunshine";
    char *p = "Moonlight";

    mostrar_primeiro_char(s);      // Passando array
    mostrar_primeiro_char(p);      // Passando ponteiro
    mostrar_primeiro_char(&s[3]);  // Passando o endereço do 's' (índice 3)

    return 0;
}