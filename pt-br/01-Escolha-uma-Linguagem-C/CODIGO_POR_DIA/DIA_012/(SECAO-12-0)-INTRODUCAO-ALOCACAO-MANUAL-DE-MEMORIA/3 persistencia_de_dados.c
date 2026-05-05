#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Mostrar a maior vantagem da alocação manual: criar algo dentro
de uma função e permitir que o resto do programa continue usando esse dado. */

int* criar_numero_persistente() {
    // Se criássemos apenas 'int n = 5', ela morreria aqui.
    // Com malloc, o número '5' sobrevive ao fim desta função.
    int *n = malloc(sizeof(int));
    *n = 5;
    return n; // Retornamos o endereço para a main usar
}

int main() {
    int *meu_numero = criar_numero_persistente();

    printf("O numero persistente eh: %d\n", *meu_numero);

    free(meu_numero); // Agora que terminamos de usar, limpamos a memória.
    return 0;
}