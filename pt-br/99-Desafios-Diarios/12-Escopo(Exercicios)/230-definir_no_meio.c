/* Objetivo: Fixar a sintaxe de definição de variáveis no meio do bloco, respeitando que não podem ser usadas antes da definição
Escreva um programa que:
1. Na main, primeiro imprima a mensagem "Iniciando programa...".
2. Depois, defina uma variável int a = 10.
3. Imprima o valor de a.
4. Em seguida, defina outra variável int b = a * 2 (após a definição de a).
5. Imprima b.
6. Por fim, tente (comentado) escrever printf("%d\n", c); antes de definir int c = 99;.
 - No comentário, explique o erro que o compilador geraria. */

#include <stdio.h>

int main()
{
    printf("Iniciando programa...\n");

    int a = 10;

    printf("Esse é o valor da variável a: %d\n", a);

    int b = a * 2;

    printf("Esse é o valor da variável b: %d\n", b);

    // printf("%d\n", c);
    // Essa linha geraria erro porque a variável c
    // ainda não foi declarada nesse ponto do código.

    int c = 99;

    return 0;
}