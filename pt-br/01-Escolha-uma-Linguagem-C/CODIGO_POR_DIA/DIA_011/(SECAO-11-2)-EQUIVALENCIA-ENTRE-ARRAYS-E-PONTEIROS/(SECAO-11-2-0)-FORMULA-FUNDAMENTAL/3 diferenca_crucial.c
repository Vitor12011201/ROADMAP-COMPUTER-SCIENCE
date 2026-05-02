#include <stdio.h>

/* OBJETIVO: Ilustrar a única restrição: enquanto um ponteiro é uma variável que pode "caminhar",
 o nome do array é um endereço fixo (constante) que não pode ser reatribuído. */

int main() {
    int a[] = {10, 20, 30};
    int b[] = {40, 50, 60};
    int *p = a;

    p = b;     // OK! O ponteiro agora aponta para outro lugar.
    p++;       // OK! O ponteiro agora aponta para o 50.

    // a = b;  // ERRO DE COMPILAÇÃO! Array não é reatribuível.
    // a++;    // ERRO DE COMPILAÇÃO! Não podemos mudar o endereço base do array.

    printf("Ponteiro p aponta para: %d\n", *p);
    return 0;
}