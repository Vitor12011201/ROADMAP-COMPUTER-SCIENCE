/* Objetivo: Aplicar os conceitos de escopo global e local, mostrando como uma variável global pode ser "mascarada" por uma local
Crie um programa com:
1. Uma variável global int contador = 0.
2. Uma função void incrementa_global(void) que incrementa o contador global.
3. Uma função void incrementa_local(void) que declara uma variável local int contador = 100, incrementa essa local e imprime seu valor.
Na main:
4. Chame incrementa_global() três vezes.
5. Imprima o valor do contador global.
6. Chame incrementa_local() duas vezes.
7. Imprima novamente o contador global. */

#include <stdio.h>

int contador = 0;

void incrementa_global(void) {
    contador++;
}

void incrementa_local(void) {
    int contador = 100;
    contador++;
    printf("Valor variavel local: %d\n", contador);
}

int main() {

    incrementa_global();
    incrementa_global();
    incrementa_global();
    printf("Valor da Variavel Global: %d\n", contador);
    printf("\n");
    incrementa_local();
    incrementa_local();
    printf("\n");
    printf("Valor da Variavel Global: %d\n", contador);

    return 0;
}