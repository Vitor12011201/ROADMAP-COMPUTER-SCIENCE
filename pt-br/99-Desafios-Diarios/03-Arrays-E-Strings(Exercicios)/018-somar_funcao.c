/* Crie um programa que:
Tenha uma função chamada somar.
Essa função deve receber dois inteiros como parâmetros: int a e int b.
Ela deve retornar a soma desses dois valores.
No main, peça para o usuário digitar dois números (você vai precisar de dois scanf ou um scanf com dois %d).
Mostre o resultado da soma na tela chamando a função.*/

#include <stdio.h>

int soma(int a, int b)
{
    return (a + b);
}

int main()
{
    int a;
    int b;

    printf("Digite um numero: \n");
    scanf("%d", &a);

    printf("Digite outro numero: \n");
    scanf("%d", &b);

    printf("A soma de %d + %d = %d", a, b, soma(a,b));
}