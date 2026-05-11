#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Usar calloc para alocar um array de inteiros, demonstrando
   que toda a memória já vem inicializada com zero automaticamente. */

int main() {
    int quantidade = 8;
    int *numeros;

    // calloc(quantidade, tamanho_de_cada_elemento) - já zera a memória
    numeros = calloc(quantidade, sizeof(int));

    // Verificação obrigatória de falha na alocação
    if (numeros == NULL) {
        fprintf(stderr, "Erro fatal: Não foi possível alocar %d inteiros com calloc.\n", quantidade);
        return 1;
    }

    // Como calloc zerou tudo, não precisamos inicializar manualmente
    printf("Array alocado com calloc (todos os valores já são zero):\n");
    for (int i = 0; i < quantidade; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);  // tudo zero
    }

    // Libera a memória
    free(numeros);
    numeros = NULL;

    return 0;
}