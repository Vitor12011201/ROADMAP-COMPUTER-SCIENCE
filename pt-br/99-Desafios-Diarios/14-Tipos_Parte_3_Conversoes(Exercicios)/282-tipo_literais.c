/* Objetivo: Compreender que constantes literais sem ponto (como 3) são tratadas rigidamente como inteiros, enquanto constantes com ponto (como 3.0) são double, alterando o resultado da expressão.
Instruções:
1. Declare double resultado_int = 1 / 2; (usando inteiros puros).
2. Declare double resultado_double = 1.0 / 2; (usando uma constante double).
3. Imprima ambos os resultados usando %f.*/

#include <stdio.h>

int main()
{

    double resultado_int = 1 / 2;
    double resultado_double = 1.0 / 2;

    printf("Resultado int: %f\n", resultado_int);
    printf("Resultado double: %f\n", resultado_double);

    return 0;

}