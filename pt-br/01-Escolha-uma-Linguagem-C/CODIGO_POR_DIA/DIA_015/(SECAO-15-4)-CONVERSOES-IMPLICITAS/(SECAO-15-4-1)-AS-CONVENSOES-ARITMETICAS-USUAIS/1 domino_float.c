/* Objetivo: Observar como a presença de um único operando flutuante transforma o resultado de uma divisão inteira.
Instruções:
1. Declare int a = 5; e int b = 2;.
2. Crie uma variável double resultado1 = a / b; e imprima com %f. (Lembre-se da divisão inteira!).
3. Crie uma variável double resultado2 = a / 2.0; (onde o 2.0 literal é um double). Imprima com %f. */

#include <stdio.h>

int main()
{
    int a = 5;
    int b = 2;

    double resultado1 = a / b;
    printf("Resultado 1: %f\n", resultado1);

    double resultado2 = a / 2.0;
    printf("Resultado 2: %f\n", resultado2);

    return 0;
}