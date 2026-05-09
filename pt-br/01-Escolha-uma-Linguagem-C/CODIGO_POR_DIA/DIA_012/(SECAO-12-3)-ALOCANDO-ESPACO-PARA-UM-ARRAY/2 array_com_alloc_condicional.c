#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Usar a atribuição dentro da condição do if para alocar um array
   de forma concisa. Também demonstrar como calcular o tamanho total
   multiplicando o tamanho do tipo pelo número de elementos. */

int main() {
    int elementos = 8;
    int *numeros;

    // Atribui malloc e já verifica se falhou dentro do if
    if ((numeros = malloc(elementos * sizeof *numeros)) == NULL) {
        perror("Falha na alocacao do array");
        exit(EXIT_FAILURE);
    }

    // Preenche o array com o dobro do índice
    for (int i = 0; i < elementos; i++) {
        numeros[i] = i * 2;
    }

    // Exibe os valores
    printf("Array de %d inteiros:\n", elementos);
    for (int i = 0; i < elementos; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Libera memória e evita ponteiro solto
    free(numeros);
    numeros = NULL;

    return 0;
}