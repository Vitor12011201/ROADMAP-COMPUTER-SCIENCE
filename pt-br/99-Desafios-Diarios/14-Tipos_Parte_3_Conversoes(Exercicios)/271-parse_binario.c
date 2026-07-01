/* Objetivo: Usar o poder da função strtoul para converter uma string binária diretamente para um inteiro numérico.
Instruções:
1. Declare uma string que represente um número em binário: char *codigo_binario = "11001010";.
2. Use a função strtoul para fazer a conversão. Mude o argumento da base para 2 e, por enquanto, passe NULL no parâmetro de detecção de erros.
3. Imprima o resultado final em Decimal (%lu) e em Hexadecimal (%X). */

#include <stdio.h>
#include <stdlib.h>


int main()
{

    char *codigo_binario = "11001010";

    unsigned long resultado = strtoul(codigo_binario, NULL, 2);

    printf("Decimal: %lu\n", resultado);

    printf("Hexadecimal: %lX", resultado);

    return 0;

}