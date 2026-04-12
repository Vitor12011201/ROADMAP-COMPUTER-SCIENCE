#include <stdio.h>

/* Crie uma função chamada mostrarNumeros que:
Recebe um array de 3 números
Usa um for para mostrar cada número na tela
No main:
Crie o array
Leia os 3 números com for
Chame a função */

void mostrarNumeros(int numeros[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("Os numeros são: %d\n", numeros[i]);
    }
}

int main()
{
    int numero[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Digite um numero: \n");
        scanf("%d", &numero[i]);
    }
    mostrarNumeros(numero);
}
