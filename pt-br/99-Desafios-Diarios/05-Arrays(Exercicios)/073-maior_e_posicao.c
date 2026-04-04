/*Objetivo: Usar a notação de ponteiro para encontrar o maior valor.
1. Crie uma função void analisar_maximo(int *a, int len).
2. Essa função deve encontrar qual é o maior valor do array e em qual índice ele está.
3. No final da função, imprima: "O maior valor é X e está no índice Y".
4. No main, use o atalho que aprendemos: passe o array sem usar colchetes e use sizeof para calcular o len dinamicamente antes de chamar a função.*/

#include <stdio.h>

void analizar_maximo(int* a, int comprimento)
{
    int maximo = *a;
    int indice = 0;
    for (int i = 0; i < comprimento; i++)
    {
        if (maximo < a[i])
        {
            maximo = a[i];
            indice = i;
        }
    }
    printf("O maior elemento do Array e: [%d] e ele esta na posicao [%d]\n", maximo, indice);
}

int main()
{
    int array[] = {-4, 6, -5, 8, 9};
    analizar_maximo(array, sizeof(array) / sizeof(int));
}
