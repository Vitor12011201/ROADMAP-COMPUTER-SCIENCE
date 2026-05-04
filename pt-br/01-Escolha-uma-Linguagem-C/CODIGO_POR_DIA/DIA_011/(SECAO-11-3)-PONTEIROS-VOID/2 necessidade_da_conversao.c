#include <stdio.h>

/* OBJETIVO: Mostrar que é proibido desreferenciar um void* diretamente.
   É preciso "avisar" ao compilador qual o tipo de destino antes de acessar o valor. */

int main() {
    int numero = 42;
    void *generico = &numero;

    // printf("%d", *generico); // ERRO: O compilador nao sabe quantos bytes ler

    // Jeito correto: converter para (int*) antes de desreferenciar
    int *especifico = (int*)generico;

    printf("Valor recuperado: %d\n", *especifico);
    // Ou de forma direta:
    printf("Valor direto: %d\n", *(int*)generico);

    return 0;
}