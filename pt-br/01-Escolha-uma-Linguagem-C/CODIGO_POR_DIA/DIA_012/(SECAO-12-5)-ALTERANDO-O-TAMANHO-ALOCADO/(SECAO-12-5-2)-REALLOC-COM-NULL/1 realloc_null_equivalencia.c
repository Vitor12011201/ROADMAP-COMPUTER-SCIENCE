#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Demonstrar que realloc(NULL, tamanho) funciona exatamente
   como malloc(tamanho). Mostrar duas formas de alocar o mesmo bloco. */

int main() {
    int *p1, *p2;
    int elementos = 5;

    // Forma tradicional com malloc
    p1 = malloc(elementos * sizeof(int));
    if (p1 == NULL) {
        fprintf(stderr, "Erro: malloc falhou.\n");
        return 1;
    }

    // Forma equivalente com realloc a partir de NULL
    p2 = realloc(NULL, elementos * sizeof(int));
    if (p2 == NULL) {
        fprintf(stderr, "Erro: realloc(NULL) falhou.\n");
        free(p1);
        return 1;
    }

    printf("Ambas as alocações funcionaram!\n");
    printf("p1 (malloc) : %p\n", (void*)p1);
    printf("p2 (realloc(NULL)) : %p\n", (void*)p2);

    // Preenche e imprime p2 para mostrar que funciona normalmente
    for (int i = 0; i < elementos; i++) {
        p2[i] = i * 10;
    }

    printf("Valores em p2: ");
    for (int i = 0; i < elementos; i++) {
        printf("%d ", p2[i]);
    }
    printf("\n");

    free(p1);
    free(p2);
    p1 = p2 = NULL;

    return 0;
}