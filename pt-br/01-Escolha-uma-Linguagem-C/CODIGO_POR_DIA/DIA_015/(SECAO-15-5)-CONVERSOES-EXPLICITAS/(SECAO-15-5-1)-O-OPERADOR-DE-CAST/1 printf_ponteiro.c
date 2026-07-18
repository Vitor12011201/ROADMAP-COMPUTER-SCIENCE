#include <stdio.h>

/* OBJETIVO: Demonstrar como o formatador '%p' do printf exige estritamente
   um ponteiro do tipo 'void*'. Usar o cast explícito para eliminar avisos
   (warnings) de compilação em compiladores mais rígidos. */

int main() {
    int taxa_transmissao = 3490;
    int *ponteiro_taxa = &taxa_transmissao;

    printf("--- Exibição Segura de Endereços de Memória ---\n");

    /* Se passarmos 'ponteiro_taxa' (que é int*) diretamente, alguns compiladores
       reclamam que %p esperava 'void*'. O cast resolve isso de forma limpa. */
    printf("Endereço real da variável na RAM: %p\n", (void *)ponteiro_taxa);

    return 0;
}