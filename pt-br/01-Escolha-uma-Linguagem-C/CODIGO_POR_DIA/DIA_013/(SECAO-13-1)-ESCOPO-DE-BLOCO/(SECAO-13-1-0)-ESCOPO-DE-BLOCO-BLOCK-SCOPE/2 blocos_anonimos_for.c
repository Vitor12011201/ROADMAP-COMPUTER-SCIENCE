#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Mostrar que podemos criar blocos arbitrários com chaves
   apenas para isolar variáveis. Além disso, demonstrar o escopo de
   variáveis declaradas no cabeçalho do 'for' (C99): elas existem
   apenas dentro do loop. */

int main() {
    printf("=== Bloco anônimo (apenas chaves) ===\n");

    // Início de um bloco artificial
    {
        int x = 100;
        printf("Dentro do bloco anônimo: x = %d\n", x);
        // Podemos alocar memória aqui, mas precisamos liberar antes do fim do bloco
        int *p = (int*)malloc(sizeof(int));
        if (p != NULL) {
            *p = 200;
            printf("  Ponteiro p aponta para %d\n", *p);
            free(p);   // Libera antes de sair do bloco
            p = NULL;
        }
    } // Fim do bloco - 'x' e 'p' (local) deixam de existir

    // 'x' não é mais acessível:
    // printf("%d", x);  // ERRO!

    printf("\n=== Escopo da variável do 'for' ===\n");
    for (int i = 0; i < 3; i++) {
        printf("Dentro do loop: i = %d\n", i);
        // Variáveis declaradas dentro do loop também são locais à iteração
        int temporaria = i * 10;
        printf("  temporaria = %d\n", temporaria);
    }
    // 'i' e 'temporaria' não existem mais aqui:
    // printf("%d", i);  // ERRO!

    printf("\n=== Tentando usar i após o loop (não compila) ===\n");
    printf("Para manter o valor, declare i antes do for.\n");

    return 0;
}