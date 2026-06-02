/* Objetivo: Compreender onde a variável do loop começa e termina na prática, e como manter o valor após o loop se necessário.
Instruções:
Tente criar um código que use um for (int i = 0; i < 5; i++).
Tente imprimir o valor de i fora e depois do loop, apenas para ver o erro que o compilador gera.
A Correção: Altere o código declarando int i; antes do loop, e tire o int de dentro do for (ficando apenas for (i = 0; i < 5; i++)).
Imprima i após o loop e veja qual valor ele assume quando o loop termina.*/

#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("valor do i (dentro do for): %d\n", i);
    }

    printf("valor do i (fora do for): %d\n", i);

    return 0;

}