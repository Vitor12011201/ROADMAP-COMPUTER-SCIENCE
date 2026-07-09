/* Objetivo: Entender como a promoção automática impede que uma conta intermediária estoure o limite do tipo original.
Instruções:
1. O limite máximo de um signed char é 127.
2. Declare char x = 100; e char y = 50;. A soma teórica seria 150, o que estouraria o char.
3. Crie uma variável int resultado = x + y;.
4. Imprima o resultado usando %d. */

#include <stdio.h>

int main()
{
    char x = 100;
    char y = 50;

    int resultado = x + y;

    printf("Resultado: %d\n", resultado);

    return 0;
}