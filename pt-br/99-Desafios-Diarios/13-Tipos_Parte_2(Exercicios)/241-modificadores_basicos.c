/* Objetivo: Compreender a diferença de espaço entre um int padrão, um short int (inteiro curto) e um long long int (inteiro muito longo).
Instruções:
1. Declare três variáveis: uma short int pequeno;, uma int normal; e uma long long int gigante;.
2. Use o operador sizeof para descobrir quantos bytes cada uma dessas três variáveis ocupa na memória do seu computador.
3. Imprima esses tamanhos no printf. */

#include <stdio.h>

int main()
{

    short int pequeno;
    int normal;
    long long int gigante;

    printf("Tamanho da variavel (pequeno): %zu Bytes\n", sizeof(pequeno));
    printf("Tamanho da variavel (normal): %zu Bytes\n", sizeof(normal));
    printf("Tamanho da variavel (gigante): %zu Bytes\n", sizeof(gigante));

    return 0;

}
