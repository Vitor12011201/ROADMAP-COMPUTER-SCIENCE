#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* OBJETIVO: Implementar uma versão de realloc para memória alinhada
   (aligned_realloc) que aloca novo bloco com aligned_alloc, copia os dados
   e libera o antigo. Embora ineficiente (sempre copia), é necessário porque
   realloc padrão não garante alinhamento. Aplicado a um array de structs. */

typedef struct {
    int id;
    char nome[32];
    float valor;
} Item;

// aligned_realloc: redimensiona memória alinhada (sempre copia dados)
// ptr: ponteiro antigo (pode ser NULL)
// old_size: tamanho antigo em bytes (se ptr NULL, use 0)
// alignment: alinhamento desejado (potência de 2)
// new_size: novo tamanho em bytes (múltiplo de alignment)
void* aligned_realloc(void *ptr, size_t old_size, size_t alignment, size_t new_size) {
    // Aloca novo bloco alinhado
    void *new_ptr = aligned_alloc(alignment, new_size);
    if (new_ptr == NULL) {
        return NULL;   // falha na alocação, ptr antigo permanece intacto
    }

    // Copia o mínimo entre o tamanho antigo e o novo
    if (ptr != NULL) {
        size_t copy_size = (old_size < new_size) ? old_size : new_size;
        memcpy(new_ptr, ptr, copy_size);
        free(ptr);      // libera o bloco antigo
    }

    return new_ptr;
}

int main() {
    size_t alinhamento = 16;          // alinhamento de 16 bytes
    size_t elementos_iniciais = 3;
    size_t tamanho_inicial = elementos_iniciais * sizeof(Item);
    // Garante que o tamanho é múltiplo do alinhamento
    if (tamanho_inicial % alinhamento != 0) {
        tamanho_inicial += alinhamento - (tamanho_inicial % alinhamento);
    }

    // Aloca array alinhado de Itens
    Item *itens = aligned_alloc(alinhamento, tamanho_inicial);
    if (itens == NULL) {
        fprintf(stderr, "Falha na alocacao inicial.\n");
        return 1;
    }

    // Preenche os 3 primeiros itens
    for (int i = 0; i < elementos_iniciais; i++) {
        itens[i].id = i + 1;
        sprintf(itens[i].nome, "Item_%d", i + 1);
        itens[i].valor = (i + 1) * 10.5;
    }

    printf("Array inicial (%zu elementos):\n", elementos_iniciais);
    for (int i = 0; i < elementos_iniciais; i++) {
        printf("  %s: id=%d, valor=%.1f\n", itens[i].nome, itens[i].id, itens[i].valor);
    }

    // Redimensiona para 6 elementos (aumenta)
    size_t novos_elementos = 6;
    size_t novo_tamanho = novos_elementos * sizeof(Item);
    if (novo_tamanho % alinhamento != 0) {
        novo_tamanho += alinhamento - (novo_tamanho % alinhamento);
    }

    Item *temp = aligned_realloc(itens, tamanho_inicial, alinhamento, novo_tamanho);
    if (temp == NULL) {
        fprintf(stderr, "Falha no redimensionamento.\n");
        free(itens);
        return 1;
    }
    itens = temp;

    // Inicializa os novos elementos (índices 3,4,5)
    for (int i = elementos_iniciais; i < novos_elementos; i++) {
        itens[i].id = i + 1;
        sprintf(itens[i].nome, "Item_%d", i + 1);
        itens[i].valor = (i + 1) * 10.5;
    }

    printf("\nArray redimensionado (%zu elementos):\n", novos_elementos);
    for (int i = 0; i < novos_elementos; i++) {
        printf("  %s: id=%d, valor=%.1f\n", itens[i].nome, itens[i].id, itens[i].valor);
    }

    // Verifica alinhamento do ponteiro atual
    printf("\nPonteiro atual %p está alinhado a %zu bytes? %s\n",
           (void*)itens, alinhamento,
           ((unsigned long)itens % alinhamento == 0) ? "Sim" : "Não");

    free(itens);
    return 0;
}