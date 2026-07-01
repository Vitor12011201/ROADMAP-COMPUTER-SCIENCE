/* Objetivo: Praticar o uso da família atoi/atof sabendo de suas limitações.
Instruções:
1. Declare uma string char *texto_idade = "25"; e uma string char *texto_preco = "19.99";.
2. Use atoi para converter a idade para um int e atof para converter o preço para um float.
3. Imprima os valores numéricos somando 1 a cada um deles para provar que agora são números reais e não texto.
4. Crie uma terceira conversão testando atoi("erro") e imprima o resultado obtido.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *texto_idade = "25";
    char *texto_preco = "19.99";

    int idade = atoi(texto_idade);
    float preco = atof(texto_preco);

    printf("Idade + 1 = %d\n", idade + 1);
    printf("preso + 1 = %.2f\n", preco + 1);

    int teste_erro = atoi("erro");
    printf("Resultado de atoi(\"erro\"): %d\n", teste_erro);

    return 0;

}