/*Objetivo: Criar e usar um apelido para um ponteiro de inteiro, entendendo a sintaxe.
1. Crie um typedef int *NumeroPtr;.
2. No main, crie um int n = 50;.
3. Declare uma variável NumeroPtr p = &n;.
4. Imprima o valor de n usando o ponteiro p*/

#include <stdio.h>

typedef int *NumeroPtr;

int main() {
    int n = 50;

    NumeroPtr p = &n;

    printf("Valor que esta no n: %d\n", *p);

    return 0;
}