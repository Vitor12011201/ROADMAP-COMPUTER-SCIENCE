#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Alocar espaço para um único tipo primitivo na Heap e entender que
o ponteiro retornado pelo malloc deve ser tratado com o tipo correto. */

int main() {
    // Aloca memória para 1 int. O malloc retorna void*, que o C converte
    // automaticamente para int* na atribuição.
    int *p = malloc(sizeof(int));

    if (p == NULL) return 1; // Boa prática: verificar se a memória acabou

    *p = 12;
    printf("Valor no heap: %d\n", *p);

    free(p); // Liberando a memória. O ponteiro 'p' ainda existe, mas é "lixo".
    p = NULL; // Técnica de segurança: evita usar o ponteiro por acidente.

    return 0;
}