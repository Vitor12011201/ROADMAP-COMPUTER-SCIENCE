#include <stdio.h>

/*Exercício: Analisador de números
Crie um programa em C que:
Peça para o usuário digitar 10 números inteiros
Guarde esses números em um array
Use funções separadas para:
Mostrar todos os números digitados
Encontrar o maior número
Encontrar o menor número
Calcular a média dos valores
No final, o main deve imprimir:
Lista de números
Maior
Menor
Média */

void ler_Numeros(int numeros[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("(%d) Digite um numero: \n", i + 1);
        scanf("%d", &numeros[i]);
    }
}

void mostrar_Numeros(int numeros[], int tamanho)
{
    printf("Numeros Digitados: \n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("[%d] \n", numeros[i]);
    }
}

int maior_Numero(int numeros[], int tamanho)
{
    int maior = numeros[0];
    for (int i = 0; i < tamanho; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
    }
    return maior;
}

int menor_Numero(int numeros[], int tamanho)
{
    int menor = numeros[0];
    for (int i = 0; i < tamanho; i++)
    {
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }
    return menor;
}

float media_Numeros(int numeros[], int tamanho)
{
    float media = 0;
    for (int i = 0; i < tamanho; i++)
    {
        media += numeros[i];
    }
    return media / tamanho;
}

int main()
{
    int array[10];
    ler_Numeros(array, 10);
    mostrar_Numeros(array, 10);
    int maior = maior_Numero(array, 10);
    printf("O maior numero é: %d \n", maior);
    int menor = menor_Numero(array, 10);
    printf("O menor Numero é: %d \n", menor);
    float media = media_Numeros(array, 10);
    printf("A media dos numeros é: %f \n", media);
}
