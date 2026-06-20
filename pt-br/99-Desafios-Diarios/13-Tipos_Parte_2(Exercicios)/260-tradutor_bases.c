/* Objetivo: Praticar a exibição de um mesmo número em diferentes bases usando os recursos do printf.
Instruções:
1. Declare uma variável com o número hexadecimal: int valor = 0x1A2B;.
2. Use o printf para exibir esse único número de 4 formas diferentes na mesma tela:
- Em decimal (%d)
- Em octal (%o)
- Em hexadecimal com letras minúsculas (%x)
- Em hexadecimal com letras maiúsculas (%X)
3. Adicione o caractere # no formato (ex: %#X e %#o) para fazer o printf incluir automaticamente os prefixos 0X e 0 na tela. */

#include <stdio.h>

int main()
{

    int valor = 0x1A2B;

    printf("valor em decimal: %d\n", valor);

    printf("valor em octal: %#o\n", valor);

    printf("hexadecimal com letras minusculas: %x\n", valor);

    printf("hexadecimal com letras maiusculas: %#X\n", valor);

    return 0;

}