/* Objetivo: Ver o que acontece quando convertemos um inteiro muito grande para um float simples que tenta achar o número mais próximo, mas perde precisão.
Instruções:
1. O tipo float só tem precisão de cerca de 6 a 7 dígitos significativos.
2. Declare um int numero_grande = 123456789; (9 dígitos significativos).
3. Converta esse número para um float: float numero_float = (float)numero_grande;.
4. Imprima o numero_float usando %.2f e compare visualmente com o original. */

#include <stdio.h>

int main(void)
{
    int numero_grande = 123456789;

    float numero_float = (float) numero_grande;

    printf("Número original: %d\n", numero_grande);
    printf("Número em float: %.2f\n", numero_float);

    return 0;
}