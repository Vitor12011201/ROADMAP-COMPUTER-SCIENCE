/* Objetivo: Observar o que acontece quando misturamos um int negativo com um unsigned int na mesma conta e a regra força a conversão para unsigned.
Instruções:
1. Declare int com_sinal = -10;.
2. Declare unsigned int sem_sinal = 5;.
3. Crie uma estrutura condicional para testar qual número é maior: if (com_sinal > sem_sinal).
4. Se o if for verdadeiro, imprima: "-10 e maior que 5?! A regra unsigned engoliu o sinal!". Caso contrário, imprima o esperado: "5 e maior que -10".*/

#include <stdio.h>

int main()
{

    int com_sinal = -10;
    unsigned int sem_sinal = 5;

    if (com_sinal > sem_sinal)
    {
        printf("-10 e maior que 5?! A regra unsigned engoliu o sinal!\n");
    } else
    {
        printf("5 e maior que -10\n");
    }

    return 0;

}