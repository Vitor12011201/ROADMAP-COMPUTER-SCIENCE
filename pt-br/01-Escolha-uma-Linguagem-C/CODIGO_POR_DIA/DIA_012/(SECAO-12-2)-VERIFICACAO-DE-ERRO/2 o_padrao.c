#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Usar a atribuição dentro da condição do 'if'.
   Este padrão é extremamente comum em C para manter o código conciso. */

int main() {
    int *p;

    // Atribui o resultado de malloc a 'p' e IMEDIATAMENTE compara com NULL
    if ((p = malloc(sizeof *p * 5)) == NULL) {
        perror("Falha na alocação"); // perror imprime a causa do erro do sistema
        exit(EXIT_FAILURE);
    }

    printf("Alocação concisa realizada com sucesso.\n");

    free(p);
    return 0;
}