/* Objetivo: Usar typedef para criar um padrão de função (assinatura) e aplicá-lo.
1. Crie um typedef para um ponteiro de função chamado OperacaoMatematica. Ela deve receber dois int e retornar um int.
- typedef int (*OperacaoMatematica)(int, int);
2. Crie duas funções: somar e subtrair.
3. Crie uma função chamada executar(int a, int b, OperacaoMatematica op). Essa função deve apenas chamar op(a, b) e mostrar o resultado.
4. No main, chame a função executar duas vezes: uma passando a somar e outra passando a subtrair.*/

#include <stdio.h>

typedef int (*OpercaoMatematica)(int, int);

int somar(int a,int b)
{
    return a + b;
}

int subtrair(int a,int b)
{
    return a - b;
}

void executar (int a, int b, OpercaoMatematica op)
{
    int resultado = op(a,b);
    printf("Resultado: %d\n", resultado);
}

int main()
{
    executar(10, 20, somar);
    executar(47, 54, subtrair);

    return 0;
}

