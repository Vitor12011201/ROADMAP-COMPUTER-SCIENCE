/* Criar um programa em C que:
Peça 5 números inteiros ao usuário.
Armazene esses números em um array.
Use uma função com ponteiros para calcular a média dos valores.
Imprima a média no final.*/

#include <stdio.h>

float calcularMedia(int* ptr, int tamanho)
{
    int soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma += *(ptr + i);
    }

    float media = (float)soma / tamanho;

    return media;
}

int main()
{
    int numeros[5];

    printf("Digite 5 numeros:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numeros[i]);
    }

    float media = calcularMedia(numeros, 5);

    printf("Media dos numeros: %.2f\n", media);

    return 0;
}
