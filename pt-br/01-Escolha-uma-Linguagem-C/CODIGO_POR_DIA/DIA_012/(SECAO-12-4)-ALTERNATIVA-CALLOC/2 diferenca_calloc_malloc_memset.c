#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // para memset

/* OBJETIVO: Comparar calloc com malloc + memset, mostrando que calloc
   é mais conciso e seguro para alocar arrays zerados. */

int main() {
    int elementos = 6;
    int *p1, *p2;

    // Forma 1: calloc já zera automaticamente
    if ((p1 = calloc(elementos, sizeof(int))) == NULL) {
        perror("Falha no calloc");
        exit(EXIT_FAILURE);
    }

    // Forma 2: malloc + memset (dois passos)
    if ((p2 = malloc(elementos * sizeof(int))) == NULL) {
        perror("Falha no malloc");
        free(p1);   // libera o que já foi alocado antes de sair
        exit(EXIT_FAILURE);
    }
    memset(p2, 0, elementos * sizeof(int));  // zera manualmente

    // Agora ambos os arrays estão zerados
    printf("p1 (calloc) - primeiros valores: %d %d %d\n", p1[0], p1[1], p1[2]);
    printf("p2 (malloc+memset) - primeiros valores: %d %d %d\n", p2[0], p2[1], p2[2]);

    // Libera tudo
    free(p1);
    free(p2);
    p1 = NULL;
    p2 = NULL;

    return 0;
}