#include <stdio.h>
#include <float.h>

/* OBJETIVO: Comparar o limite de entrada/matemática (DIG) com o limite de
   exportação/serialização (DECIMAL_DIG) para tipos float e double. */

int main() {
    printf("--- LIMITES PARA FLOAT ---\n");
    printf("Seguro para entrada (FLT_DIG): %d digitos\n", FLT_DIG);
    printf("Necessario para salvar/restaurar (FLT_DECIMAL_DIG): %d digitos\n\n", FLT_DECIMAL_DIG);

    printf("--- LIMITES PARA DOUBLE ---\n");
    printf("Seguro para entrada (DBL_DIG): %d digitos\n", DBL_DIG);
    printf("Necessario para salvar/restaurar (DBL_DECIMAL_DIG): %d digitos\n", DBL_DECIMAL_DIG);

    return 0;
}