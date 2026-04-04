/* Declare um array de 5 números inteiros.
Peça ao usuário para digitar os números.
Crie uma função que receba um ponteiro para o array.
A função deve percorrer o array usando ponteiros.
A função deve retornar o maior número encontrado. */


#include <stdio.h>

int encontrarMaior(int* ptr, int tamanho)
{
    int maior = *ptr;

    for (int i = 1; i < tamanho; i++)
    {
        if (*(ptr + i) > maior)
        {
            maior = *(ptr + i);
        }
    }

    return maior;
}

void imprimirArray(int* ptr, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}

int main()
{
    int numeros[5];

    printf("Digite 5 numeros:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numeros[i]);
    }

    printf("Numeros digitados: ");
    imprimirArray(numeros, 5);

    int maiorNumero = encontrarMaior(numeros, 5);

    printf("Maior numero: %d\n", maiorNumero);

    return 0;
}
