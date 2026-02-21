/*Escreva uma função chamada dobrar. Ela deve:
Receber um número inteiro como parâmetro.
Retornar o dobro desse valor (também como inteiro*/

#include <stdio.h>

int dobrar(int n)
{
    n = n * 2;
    return n;
}

int main()
{
    int n_1;
    printf("Digite um numero: \n");
    scanf("%d", &n_1);
    printf("O dobro do numero digitado e %d", dobrar(n_1));
}
