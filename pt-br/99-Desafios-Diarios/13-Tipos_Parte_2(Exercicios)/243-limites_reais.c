/* Objetivo: Visualizar os limites máximos reais dos tipos inteiros usando a biblioteca padrão do C.
Instruções:
1. Inclua a biblioteca <limits.h> no topo do seu código.
2. No main, use as constantes padrão INT_MAX (máximo do int com sinal) e UINT_MAX (máximo do unsigned int).
3. Imprima ambas na tela. Para UINT_MAX, lembre-se de usar o especificador de formato %u (de unsigned).
Reflexão: Verifique se no seu computador o UINT_MAX é exatamente o dobro de INT_MAX + 1. */

#include <stdio.h>
#include <limits.h>

int main()
{
    printf("UINT_MAX: %u\n", UINT_MAX);
    printf("INT_MAX: %d\n", INT_MAX);

    return 0;
}