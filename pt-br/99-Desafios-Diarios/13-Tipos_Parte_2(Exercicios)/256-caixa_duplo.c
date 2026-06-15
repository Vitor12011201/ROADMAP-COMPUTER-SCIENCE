/* Objetivo: Resolver o problema da perda de precisão usando a ferramenta certa para o trabalho (double).
Instruções:
1. Declare double f_double = 3.14159265358; e um double g_double = 0.000000000002;.
2. Some os dois (f_double += g_double;).
3. Imprima o resultado com %.12f.
4. No mesmo arquivo, use a macro DBL_DIG (da <float.h>) para imprimir quantos dígitos seguros o double oferece no seu sistema.
- Reflexão: Por que o double não falhou onde o float passou vergonha?
Reposta: Porque o double tem mais bits para armazenar o número. */

#include <stdio.h>
#include <float.h>

int main()
{

    double f_double = 3.14159265358;

    double g_double = 0.000000000002;

    f_double += g_double;

    printf("f_double: %.12f\n", f_double);
    printf("g_double: %.12f\n", g_double);

    printf("quantos digitos seguros o double oferece no meu sistema: %d\n", DBL_DIG);

    return 0;

}