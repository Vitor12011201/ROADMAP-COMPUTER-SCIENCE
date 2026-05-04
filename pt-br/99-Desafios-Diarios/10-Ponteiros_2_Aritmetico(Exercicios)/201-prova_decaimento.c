/*Objetivo: Ver com os próprios olhos que o array "encolhe" dentro da função.
1. Crie uma função void analisa_tamanho(int arr[]). Dentro dela, imprima o sizeof(arr).
2. No main, crie int meu_array[10]; e imprima o sizeof(meu_array).
3. Passe o array para a função.
Desafio: No seu main, o tamanho deve ser 40 (10 ints). Na função, será 8 (o tamanho do ponteiro). Explique em um comentário por que isso acontece.

Resposta: Fora da função, sizeof(meu_array) retorna o tamanho total do array (10 * sizeof(int) = 40 bytes).
Dentro da função, o array é convertido automaticamente para um ponteiro (int *arr),então sizeof(arr) retorna apenas o tamanho do ponteiro (4 ou 8 bytes),e não o tamanho total do array.*/

#include <stdio.h>

void analisa_tamanho(int arr[])
{
    printf("tamanho do ponteiro: %zu Bytes\n", sizeof(arr));
}

int main()
{

    int meu_array[10];

    printf("Tamanho do array: %zu Bytes\n", sizeof(meu_array));

    analisa_tamanho(meu_array);

    return 0;

}