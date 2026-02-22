/* fazer um programa que simula uma Calculadora Simples.
O que o programa deve ter:
Uma função para cada operação: somar, subtrair, multiplicar e dividir. (Todas recebendo dois float e retornando float).
No main, você pede os dois números ao usuário.
Depois, você imprime uma "tabela" com os 4 resultados.*/

#include <stdio.h>

float soma(float a, float b)
{
    return a + b;
}

float subtracao(float a, float b)
{
    return a - b;
}

float multiplicacao(float a, float b)
{
    return a * b;
}

float divisao(float a, float b)
{
    if (a == 0 || b == 0)
    {
        printf("Nao existe divisao por 0 \n");
    }
        return a / b;

}

int main()
{
    float a, b;
    printf("Digite um numero: \n");
    scanf("%f", &a);
    printf("Digite outro numero: \n");
    scanf("%f", &b);

    printf("Os numeros digitados foram n %.2f e %.2f\n", a , b);
    printf("A soma dos numeros e: %.2f \n", soma(a, b));
    printf("A subitracao dos numeros e: %.2f \n", subtracao(a, b));
    printf("A multiplicacao dos numeros e: %.2f \n", multiplicacao(a, b));
    printf("A divisao dos numeros e: %.2f \n", divisao(a,b));
}
