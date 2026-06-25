/* Objetivo: Evitar conversões implícitas usando o operador sizeof para comprovar os tamanhos das constantes literais de ponto flutuante diretamente na memória.
Instruções:
1. Sem criar variáveis, use o printf para imprimir o tamanho em bytes (sizeof) das seguintes constantes literais:
- sizeof(5.5) (sem sufixo)
- sizeof(5.5f) (sufixo de precisão simples)
- sizeof(5.5L) (sufixo de precisão estendida)
2. Use o especificador %zu para imprimir os tamanhos retornados pelo sizeof. */

#include <stdio.h>

int main(void)
{
    printf("sizeof(5.5)  = %zu bytes\n", sizeof(5.5));
    printf("sizeof(5.5f) = %zu bytes\n", sizeof(5.5f));
    printf("sizeof(5.5L) = %zu bytes\n", sizeof(5.5L));

    return 0;
}