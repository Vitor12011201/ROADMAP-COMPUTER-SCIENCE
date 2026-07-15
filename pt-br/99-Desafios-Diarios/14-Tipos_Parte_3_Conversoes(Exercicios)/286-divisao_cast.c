/* Objetivo: Usar o cast explícito para forçar uma divisão de ponto flutuante precisa usando variáveis que foram declaradas originalmente como inteiros.
Instruções:
1. Declare int fatias_pizza = 5; e int pessoas = 2;.
2. Crie uma variável double fatias_por_pessoa;.
3. Se você fizer fatias_por_pessoa = fatias_pizza / pessoas;, o resultado será 2.0 devido à divisão inteira.
4. Corrija isso aplicando o cast explícito em apenas uma das variáveis na hora da conta: fatias_por_pessoa = (double)fatias_pizza / pessoas;.
5. Imprima o resultado com %f (deve exibir 2.500000). */

#include <stdio.h>

int main()
{

    int fatias_pizza = 5;
    int pessoas = 2;
    double fatias_por_pessoa;

    fatias_de_pessoa = fatias_pizza / pessoas;

    fatias_por_pessoa = (double)fatias_pizza / pessoas;

    printf("%f\n", fatias_por_pessoa);

    return 0;
}