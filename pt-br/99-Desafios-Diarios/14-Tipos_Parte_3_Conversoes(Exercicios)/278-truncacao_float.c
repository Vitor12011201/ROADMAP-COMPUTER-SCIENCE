/* Objetivo: Praticar a conversão básica de ponto flutuante para inteiro e observar o descarte da parte fracionária.
Instruções:
1. Declare um double pi_preciso = 3.99999;.
2. Crie uma variável int pi_inteiro;.
3. Faça a conversão explícita usando cast: pi_inteiro = (int)pi_preciso;.
4. Imprima o valor de pi_inteiro com %d. */

#include <stdio.h>

int main(void)
{
    double pi_preciso = 3.99999;
    int pi_inteiro;

    pi_inteiro = (int) pi_preciso;

    printf("%d\n", pi_inteiro);

    return 0;
}