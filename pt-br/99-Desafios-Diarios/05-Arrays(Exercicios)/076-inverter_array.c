/*Objetivo: Manipular a ordem dos elementos originais na exibição do programa.
1. Crie uma função void inverter(int *a, int len).
2. Essa função deve inverter a ordem do array.
3. No main, declare um array {1, 2, 3, 4, 5, 6}.
4. Chame a função e prove que o array no main mostra agora {6, 5, 4, 3, 2, 1}.*/

#include <stdio.h>

void inverter_valor(int* a, int comprimento)
{
    printf("=============================\n");
    printf("Sequencia do Array invertido:\n");
    for (int i = comprimento - 1; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    int comprimento = sizeof(array) / sizeof(int);
    printf("Sequencia do Array em ordem:\n");
    for (int i = 0; i < comprimento; i++)
    {
        printf("%d\n", array[i]);
    }

    inverter_valor(array, sizeof(array) / sizeof(int));
}
