#include <stdio.h>

/* OBJETIVO: Provar que, dentro de uma função, o parâmetro array[] não é um array real, mas um ponteiro.
 O sizeof dentro da função retornará o tamanho do endereço, não do conteúdo. */

void testar_tamanho(int arr[]) {
    // Aqui sizeof(arr) retorna o tamanho do PONTEIRO (4 ou 8 bytes)
    printf("Tamanho do parametro (ponteiro): %zu bytes\n", sizeof(arr));
}

int main() {
    int numeros[10] = {0};

    // Aqui sizeof(numeros) retorna o tamanho real (10 * 4 = 40 bytes)
    printf("Tamanho real do array: %zu bytes\n", sizeof(numeros));

    testar_tamanho(numeros);
    return 0;
}