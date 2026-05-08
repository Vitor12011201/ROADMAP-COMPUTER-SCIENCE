#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Mostrar como uma função deve lidar com falhas de alocação,
retornando NULL para que quem a chamou saiba que algo deu errado. */

int* criar_lista_dinamica(int tamanho) {
    int *lista = malloc(tamanho * sizeof(int));

    // Se falhar aqui, retornamos NULL para a main() tratar
    if (lista == NULL) {
        return NULL;
    }

    return lista;
}

int main() {
    int *minha_lista = criar_lista_dinamica(10);

    if (minha_lista == NULL) {
        printf("Não foi possível criar a lista.\n");
    } else {
        printf("Lista criada com sucesso!\n");
        free(minha_lista);
    }

    return 0;
}