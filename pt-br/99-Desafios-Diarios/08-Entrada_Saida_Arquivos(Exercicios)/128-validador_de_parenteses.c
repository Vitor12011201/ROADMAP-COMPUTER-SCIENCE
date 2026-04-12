/* Objetivo: Usar a leitura de arquivo para resolver um problema lógico.
1. Crie um arquivo chamado codigo.txt e coloque um pedaço de código C ou uma expressão matemática, tipo (a + b) * (c).
2. Seu programa deve ler o arquivo inteiro e contar:
Quantos parênteses abrem (.
Quantos parênteses fecham ).
3. No final, o programa deve dizer se a conta "bate".
Se os números forem iguais: "Parênteses balanceados".
Se forem diferentes: "Erro de sintaxe nos parênteses".*/

#include <stdio.h>

int main()
{
    FILE *fp;
    int c;
    int aberto = 0;
    int fechado = 0;

    fp = fopen("codigo.txt", "w");

    if (fp == NULL)
    {
        printf("Esse arquivo nao existe\n");
        return 1;
    }

    fputs("((15 + 20) * 45)\n", fp);

    fclose(fp);

    fp = fopen("codigo.txt", "r");

    if (fp == NULL)
    {
        printf("Esse arquivo nao existe\n");
        return 1;
    }

    while ((c = getc(fp)) != EOF)
    {
        if (c == '(')
        {
            aberto++;
        }
        else if (c == ')')
        {
            fechado++;
        }
    }
    printf("O numero de parentes abertos sao: [%d]\n", aberto);
    printf("O numero de parentes fechados sao: [%d]\n", fechado);
    if (aberto == fechado)
    {
        printf("Parenteses Balancedos\n");
    }
    else
    {
        printf("Erro de sintaxe nos parenteses\n");
    }

    fclose(fp);

    return 0;
}
