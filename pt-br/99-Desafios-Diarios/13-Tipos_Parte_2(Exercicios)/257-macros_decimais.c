/* Objetivo: Comparar as macros de armazenamento (_DIG) com as macros de conversão (_DECIMAL_DIG) no seu compilador.
Instruções:
1. Inclua <stdio.h> e <float.h>.
2. Imprima, lado a lado, o par do float (FLT_DIG e FLT_DECIMAL_DIG) e o par do double (DBL_DIG e DBL_DECIMAL_DIG).
3. Use %d para todas elas.
Reflexão: Note quantos dígitos a mais o seu sistema exige para "fidelidade total" de bits em comparação com o uso normal.*/

#include <stdio.h>
#include <float.h>

int main()
{
    printf("VALOR FLT_DIG: %d\n", FLT_DIG);
    printf("VALOR FLT_DECIMAL_DIG: %d\n", FLT_DECIMAL_DIG);
    printf("\n");
    printf("VALOR DBL_DIG: %d\n", DBL_DIG);
    printf("VALOR DBL_DECIMAL_DIG: %d\n", DBL_DECIMAL_DIG);

    return 0;
}
