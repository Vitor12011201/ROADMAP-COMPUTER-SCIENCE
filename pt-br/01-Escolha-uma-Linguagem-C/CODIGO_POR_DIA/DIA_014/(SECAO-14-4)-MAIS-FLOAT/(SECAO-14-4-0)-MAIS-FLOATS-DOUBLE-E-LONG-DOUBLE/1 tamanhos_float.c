#include <stdio.h>
#include <float.h> // Contém as macros de precisão para ponto flutuante

/* OBJETIVO: Exibir o tamanho em bytes e a quantidade de dígitos decimais
   significativos que cada tipo de ponto flutuante consegue manter com precisão. */

int main() {
    // FLT_DIG, DBL_DIG e LDBL_DIG dizem quantos dígitos são garantidos sem arredondamento errado
    printf("FLOAT:       %zu bytes | Precisao: %d digitos decimais\n",
            sizeof(float), FLT_DIG);

    printf("DOUBLE:      %zu bytes | Precisao: %d digitos decimais\n",
            sizeof(double), DBL_DIG);

    printf("LONG DOUBLE: %zu bytes | Precisao: %d digitos decimais\n",
            sizeof(long double), LDBL_DIG);

    return 0;
}