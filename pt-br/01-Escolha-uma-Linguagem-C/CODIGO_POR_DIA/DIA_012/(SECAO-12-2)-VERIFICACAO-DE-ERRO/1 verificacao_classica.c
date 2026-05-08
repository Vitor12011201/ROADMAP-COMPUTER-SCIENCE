#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Realizar a alocação e verificar se o ponteiro é nulo antes de qualquer uso.
   Se falhar, informamos o erro e interrompemos a execução de forma segura. */

int main() {
    int *p = malloc(sizeof(int) * 100);

    // Sempre verifique! Se p for NULL, *p = 10 causaria um crash.
    if (p == NULL) {
        fprintf(stderr, "Erro fatal: Falha ao alocar memória.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Se chegou aqui, a memória está garantida
    p[0] = 10;
    printf("Sucesso! Primeiro elemento: %d\n", p[0]);

    free(p);
    return 0;
}