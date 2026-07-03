/* Objetivo: Usar os limites numéricos dos caracteres para validar se uma entrada é realmente um número de forma manual.
Instruções:
1. Crie uma função chamada int eh_digito(char c).
2. Dentro dela, verifique se o caractere recebido está entre os caracteres '0' e '9' (lembre-se de que você pode usar operadores relacionais como >= e <= diretamente com caracteres).
3. Se estiver no intervalo correto, retorne o valor numérico dele (usando a subtração). Se não for um dígito (por exemplo, se for a letra 'A'), retorne -1.
4. No main, teste a função passando caracteres válidos e inválidos. */

#include <stdio.h>

int eh_digito(char c)
{
    if (c >= '0' && c <= '9')
    {
        return c - '0';
    }
    else
    {
        return -1;
    }
}

int main()
{
    char teste1 = '5';
    char teste2 = '0';
    char teste3 = '9';
    char teste4 = 'A';

    printf("Teste com '%c': %d\n", teste1, eh_digito(teste1));
    printf("Teste com '%c': %d\n", teste2, eh_digito(teste2));
    printf("Teste com '%c': %d\n", teste3, eh_digito(teste3));
    printf("Teste com '%c': %d\n", teste4, eh_digito(teste4));

    return 0;
}