#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Mostrar a interação entre escopo de bloco e alocação dinâmica.
   Um ponteiro declarado dentro de um bloco é uma variável local; quando
   o bloco termina, o ponteiro é destruído, mas a memória alocada PERSISTE
   (vazamento se o ponteiro não for salvo ou liberado). Aprender a técnica
   de retornar o ponteiro ou usar escopo externo. */

// Função que aloca memória e retorna o ponteiro (dribla o escopo)
int* alocar_bloco_externo(int valor) {
    int *p = (int*)malloc(sizeof(int));
    if (p == NULL) return NULL;
    *p = valor;
    return p;  // O ponteiro é copiado para quem chamou
}

int main() {
    printf("=== Cuidado: perda do ponteiro ===\n");

    // Bloco que aloca memória mas perde o ponteiro
    {
        int *local_ptr = (int*)malloc(sizeof(int));
        if (local_ptr == NULL) {
            fprintf(stderr, "Erro de alocação\n");
            return 1;
        }
        *local_ptr = 42;
        printf("Dentro do bloco: *local_ptr = %d\n", *local_ptr);
        // Esquecemos de free(local_ptr) antes de sair do bloco?
        // O ponteiro 'local_ptr' será destruído, a memória alocada NÃO será liberada
        // Isso causa um vazamento de memória!
    } // 'local_ptr' deixa de existir, mas a memória de 4 bytes (int) ainda está alocada
    printf("Saímos do bloco. O ponteiro foi perdido, memória vazada!\n");

    printf("\n=== Solução 1: liberar antes do fim do bloco ===\n");
    {
        int *local_ptr = (int*)malloc(sizeof(int));
        if (local_ptr != NULL) {
            *local_ptr = 99;
            printf("Valor = %d\n", *local_ptr);
            free(local_ptr);   // Libera antes de perder a referência
            local_ptr = NULL;
        }
    } // Agora sem vazamento

    printf("\n=== Solução 2: retornar o ponteiro (ou usar escopo externo) ===\n");
    int *externo_ptr = alocar_bloco_externo(123);
    if (externo_ptr != NULL) {
        printf("Ponteiro retornado da função: %d\n", *externo_ptr);
        free(externo_ptr);   // Quem alocou deve liberar
        externo_ptr = NULL;
    }

    printf("\n=== Solução 3: declarar ponteiro no escopo externo ===\n");
    int *guardado;
    {
        int *local = (int*)malloc(sizeof(int));
        if (local != NULL) {
            *local = 777;
            guardado = local;   // Atribui ao ponteiro do escopo superior
        }
    }
    if (guardado != NULL) {
        printf("Acessando via ponteiro externo: %d\n", *guardado);
        free(guardado);
        guardado = NULL;
    }

    return 0;
}