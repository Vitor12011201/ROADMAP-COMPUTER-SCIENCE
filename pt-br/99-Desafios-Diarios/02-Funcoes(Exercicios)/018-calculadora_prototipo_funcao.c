/*Pegue aquele seu código da Calculadora(Exercicios 013) (com as funções soma, subtracao, etc.) e reorganize-o:
Coloque todos os protótipos no topo (antes do main).
Mantenha o main no meio.
Mova todas as definições das funções para o final do arquivo (depois do main).*/

#include <stdio.h>

float soma(float a, float b);
float subtracao(float a, float b);
float multiplicacao(float a, float b);
float divisao(float a, float b);

int main ()
{
    float a, b;

    printf("Digite um numero\n");
    scanf("%f", &a);
    printf("Digite outro numero\n");
    scanf("%f", &b);
    printf("A soma de %.2f + %.2f = %.2f\n", a , b , soma(a,b));
    printf("A subtracao de %.2f - %.2f = %.2f\n", a , b , subtracao(a,b));
    printf("A multiplicacao de %.2f * %.2f = %.2f\n", a , b , multiplicacao(a,b));
    printf("A divisao de %.2f / %.2f = %.2f\n", a , b , divisao(a,b));
}

float soma(float a, float b)
{
    return a + b;
}
float subtracao(float a,float b)
{
    return a - b;
}
float multiplicacao(float a, float b)
{
    return a * b;
}
float divisao(float a, float b)
{
    return a / b;
}