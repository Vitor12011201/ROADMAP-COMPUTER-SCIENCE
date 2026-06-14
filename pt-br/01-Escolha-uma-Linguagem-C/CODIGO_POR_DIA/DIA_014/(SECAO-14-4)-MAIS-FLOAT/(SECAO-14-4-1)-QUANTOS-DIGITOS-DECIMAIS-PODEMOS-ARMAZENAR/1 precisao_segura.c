#include <stdio.h>
#include <float.h>

/* OBJETIVO: Demonstrar o limite seguro de dígitos garantido pela macro FLT_DIG.
   Verificar como o float se comporta ao tentar exibir além do limite de segurança. */

int main() {
    // FLT_DIG garante 6 dígitos significativos. Vamos testar um número com 6 dígitos:
    float seguro = 0.123456f;

    // Vamos testar um número com 9 dígitos significativos:
    float inseguro = 0.123456789f;

    // Impressão controlada: %.6f força 6 casas decimais, %.9f força 9 casas.
    printf("Garantido (FLT_DIG = %d): %.6f\n", FLT_DIG, seguro);
    printf("Inseguro (Passou do limite): %.9f\n", inseguro);

    return 0;
}