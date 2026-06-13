/* Objetivo: Usar a biblioteca <float.h> para descobrir quantas casas decimais o seu processador consegue garantir de forma 100% precisa em cada tipo.
Instruções:
1. Inclua <stdio.h> e <float.h>.
2. Imprima as macros de precisão: FLT_DIG (para float), DBL_DIG (para double) e LDBL_DIG (para long double).
3. Imprima também o tamanho deles em bytes usando o sizeof.
Reflexão: Quantos dígitos significativos o seu double consegue segurar a mais que o float padrão? */

#include <stdio.h>
#include <float.h>

int main()
{
    printf("Precisao do float: %d digitos\n", FLT_DIG);
    printf("Precisao do double: %d digitos\n", DBL_DIG);
    printf("Precisao do long double: %d digitos\n\n", LDBL_DIG);

    printf("Tamanho do float: %zu bytes\n", sizeof(float));
    printf("Tamanho do double: %zu bytes\n", sizeof(double));
    printf("Tamanho do long double: %zu bytes\n", sizeof(long double));

    return 0;
}
