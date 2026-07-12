#include <stdio.h>

/* OBJETIVO: Demonstrar a atribuição implícita de ida e volta de um ponteiro
   específico para um ponteiro void*, e a necessidade de resgatar o tipo para ler o dado. */

int main() {
    int numero_secreto = 42;

    // &numero_secreto é do tipo 'int*'. O C aceita guardá-lo em um 'void*' sem reclamar.
    void *ponteiro_generico = &numero_secreto;

    // O inverso também é verdadeiro: o void* flui para um 'int*' implicitamente.
    int *ponteiro_int = ponteiro_generico;

    printf("--- Conversao Basica de void* ---\n");
    // printf("%d", *ponteiro_generico); // ERRO DE COMPILAÇÃO! O compilador não sabe o tamanho de 'void'.

    printf("Valor recuperado via ponteiro_int: %d\n", *ponteiro_int);

    return 0;
}