/* Objetivo: Fixar o conceito de variável com escopo de arquivo, acessível por múltiplas funções
Escreva um programa que:
1. Declare uma variável global int contador = 0 no início do arquivo (antes de qualquer função).
2. Crie uma função void incrementar(void) que aumenta contador em 1.
3. Crie uma função void imprimir(void) que imprime o valor atual de contador.
4. Na main, chame incrementar() três vezes, depois imprimir(). */

#include <stdio.h>

int contador = 0;

void incrementar(void)
{
    contador = contador + 1;
}

void imprimir(void)
{
    printf("Valor da variavel contador: %d\n", contador);
}

int main()
{
    incrementar();
    incrementar();
    incrementar();
    imprimir();

    return 0;
}