#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Comparar endereços retornados por malloc (alinhamento padrão)
   versus aligned_alloc com diferentes alinhamentos. Mostrar que malloc já
   fornece alinhamento suficiente para double (geralmente 8 ou 16 bytes).
   O aligned_alloc permite forçar alinhamentos maiores (cache line, etc). */

int main() {
    double *p_malloc;
    double *p_aligned_8;
    double *p_aligned_64;
    int elementos = 8;
    int tamanho_bytes = elementos * sizeof(double);  // 8 * 8 = 64 bytes

    // 1. malloc normal (alinhamento suficiente para double)
    p_malloc = malloc(tamanho_bytes);
    if (p_malloc == NULL) return 1;

    // 2. aligned_alloc com alinhamento de 8 bytes (mínimo para double)
    p_aligned_8 = aligned_alloc(8, tamanho_bytes);
    if (p_aligned_8 == NULL) {
        free(p_malloc);
        return 1;
    }

    // 3. aligned_alloc com alinhamento de 64 bytes (tamanho de linha de cache comum)
    p_aligned_64 = aligned_alloc(64, tamanho_bytes);
    if (p_aligned_64 == NULL) {
        free(p_malloc);
        free(p_aligned_8);
        return 1;
    }

    // Exibe os endereços e verifica alinhamento
    printf("Alocacao de %d bytes (%d doubles):\n", tamanho_bytes, elementos);
    printf("malloc:        %p (alinhamento automatico)\n", (void*)p_malloc);
    printf("aligned_alloc(8):  %p (mod 8 = %lu)\n", (void*)p_aligned_8,
           (unsigned long)p_aligned_8 % 8);
    printf("aligned_alloc(64): %p (mod 64 = %lu)\n", (void*)p_aligned_64,
           (unsigned long)p_aligned_64 % 64);

    // Preenche os arrays com valores
    for (int i = 0; i < elementos; i++) {
        p_malloc[i] = i * 1.5;
        p_aligned_8[i] = i * 2.5;
        p_aligned_64[i] = i * 3.5;
    }

    printf("\nPrimeiros valores (p_aligned_64):");
    for (int i = 0; i < elementos; i++) {
        printf(" %.1f", p_aligned_64[i]);
    }
    printf("\n");

    free(p_malloc);
    free(p_aligned_8);
    free(p_aligned_64);

    return 0;
}