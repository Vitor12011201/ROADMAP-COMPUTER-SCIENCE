#include <stdio.h>
#include <stdbool.h> // Inclui as macros 'bool', 'true' (1) e 'false' (0)

/* OBJETIVO: Demonstrar a conversão implícita básica de inteiros comuns
   para o tipo booleano e como eles são impressos usando %d. */

int main() {
    // No C clássico, bool é apenas um apelido para o tipo numérico _Bool
    bool falso_puro = 0;
    bool verdadeiro_puro = 1;

    printf("--- Valores Booleanos Puros ---\n");
    printf("Valor de falso_puro (0):      %d\n", falso_puro);
    printf("Valor de verdadeiro_puro (1): %d\n", verdadeiro_puro);

    return 0;
}