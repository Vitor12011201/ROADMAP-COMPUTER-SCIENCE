/* Declare um array de 5 números inteiros.
Peça para o usuário digitar os 5 números.
Crie uma função que receba:
um ponteiro para o array
o tamanho do array
Dentro da função:
percorra o array usando ponteiros (não use [])
calcule a soma de todos os números
A função deve retornar a soma.
No main, imprima o resultado. */

#include <stdio.h>

int somaArray(int* ptr, int tamanho)
{
    int soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma += *(ptr + i); // Ponteiro Aritmetico: *(ptr + i) é a masca coia de ptr[i]
    }

    return soma;
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

    int resultado = somaArray(numeros, 5);

    printf("Soma total: %d\n", resultado);

    return 0;
}
