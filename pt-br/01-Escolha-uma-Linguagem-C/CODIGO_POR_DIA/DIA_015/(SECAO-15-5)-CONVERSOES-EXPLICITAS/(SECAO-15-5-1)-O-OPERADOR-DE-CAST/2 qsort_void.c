#include <stdio.h>
#include <stdlib.h> // Necessário para a função qsort

/* OBJETIVO: Implementar uma função de comparação para o 'qsort' da biblioteca padrão.
   Mostrar a diferença entre a "ginástica de cast" na mesma linha e a abordagem limpa
   usando ponteiros locais intermediários recomendada pelo Beej. */

// O qsort exige que a função de comparação receba dois ponteiros genéricos const void*
int comparar_inteiros(const void *elem1, const void *elem2) {
    // ABORDAGEM 1 (Visualmente poluída com Cast Inline):
    // int valor2 = *((const int*)elem2);

    // ABORDAGEM 2 (Recomendada pelo Beej - Mais legível e elegante):
    const int *item1 = (const int *)elem1;
    const int *item2 = (const int *)elem2;

    // Retorna a diferença matemática para ditar a ordem do array
    return (*item2 - *item1);
}

int main() {
    int latencias[] = {15, 42, 8, 23, 4};
    size_t total_elementos = sizeof(latencias) / sizeof(latencias[0]);

    printf("--- Ordenação de Array com qsort e void* ---\n");

    // qsort recebe: (array, total, tamanho_de_cada_item, funcao_comparacao)
    qsort(latencias, total_elementos, sizeof(int), comparar_inteiros);

    for (size_t i = 0; i < total_elementos; i++) {
        printf("Latência indexada: %d ms\n", latencias[i]);
    }

    return 0;
}