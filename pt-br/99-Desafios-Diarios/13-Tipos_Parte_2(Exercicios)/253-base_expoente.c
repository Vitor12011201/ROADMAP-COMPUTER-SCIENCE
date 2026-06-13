/* Objetivo: Investigar a engrenagem interna do seu processador imprimindo a base matemática usada nos cálculos flutuantes.
Instruções:
1. Imprima o valor da macro FLT_RADIX (ela mostra a base do expoente que a fórmula bizarra do livro usa).
2. Crie um double numero = 1.0;.
3. Use um loop while que divide esse número por 2 infinitamente, até que o número se torne exatamente 0.0 (isso acontece quando o expoente da memória estoura o limite mínimo, chamado de underflow).
4. Crie um contador para ver quantas divisões foram necessárias até o número sumir da existência.
5. Imprima o total de divisões. */

#include <stdio.h>
#include <float.h>

int main()
{
    int contador = 0;

    printf("base do expoente: %d\n", FLT_RADIX);

    double numero = 1.0;

    while (numero != 0.0)
    {

        printf("%.20e\n", numero);

        numero = numero / 2;

        contador++;

    }

    printf("Total de divisoes: %d\n", contador);

    return 0;

}