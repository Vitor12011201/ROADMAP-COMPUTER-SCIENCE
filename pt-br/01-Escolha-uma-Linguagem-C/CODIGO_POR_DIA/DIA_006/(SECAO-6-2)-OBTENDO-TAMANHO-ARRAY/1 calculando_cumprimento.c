#include <stdio.h>

/**
 * Exemplo: Calculando o tamanho de um Array (O Truque do sizeof)
 * Objetivo: Mostrar como descobrir o número de elementos e por que
 * arrays "decaiem" para ponteiros dentro de funções.
 */

void tentativa_falha(int arr[]) {
    // Aqui arr não é mais o bloco todo, é apenas um ponteiro para o início!
    // sizeof(arr) vai retornar 8 (tamanho do ponteiro) e não 20.
    size_t tamanho = sizeof(arr) / sizeof(arr[0]);
    printf("Dentro da funcao: %zu elementos (ERRADO!)\n", tamanho);
}

int main() {
    int numeros[] = {10, 20, 30, 40, 50}; // 5 elementos

    // No escopo onde foi criado, o C sabe o tamanho total (5 * 4 bytes = 20)
    size_t total_bytes = sizeof(numeros);
    size_t um_elemento = sizeof(numeros[0]);
    size_t comprimento = total_bytes / um_elemento;

    printf("--- No escopo da main ---\n");
    printf("Bytes totais: %zu\n", total_bytes);
    printf("Bytes por int: %zu\n", um_elemento);
    printf("Quantidade calculada: %zu elementos (CORRETO!)\n\n", comprimento);

    printf("--- Teste na Funcao ---\n");
    tentativa_falha(numeros);

    return 0;
}