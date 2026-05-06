/* Objetivo: Criar um array cujo tamanho é definido pelo usuário durante a execução.
1. Peça ao usuário quantos números ele quer guardar (ex: variável n).
2. Aloque memória para esse array: int *array = malloc(n * sizeof(int));.
3. Use um loop para preencher o array e outro para imprimir.
4. Ao final, use free(array);.
Reflexão:Arrays comuns int a[n] precisam de um tamanho fixo ou conhecido no início do bloco. Com malloc, você cria o tamanho que quiser a qualquer momento.*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    printf("Quantos numeros voce quer guardar em um array: \n");
    scanf("%d", &n);
    int *array = malloc(n * sizeof(int));

    if (array == NULL) {
        printf("Falta de memoria\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Digite o numero da posicao[%d]: \n", i);
        scanf("%d", &array[i]);
    }

    printf("Numeros digitados\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    }

    free(array);

    array = NULL;

    return 0;

}