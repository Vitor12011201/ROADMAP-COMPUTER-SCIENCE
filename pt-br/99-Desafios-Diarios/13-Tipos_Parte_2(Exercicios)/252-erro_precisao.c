/* Objetivo: Ver na prática o perigo de usar float simples para lidar com números que exigem muitas casas decimais (como sistemas financeiros).
Instruções:
1. Declare um float saldo_float = 1000000.00;.
2. Declare um double saldo_double = 1000000.00;.
3. Adicione 0.01 (um centavo) dez vezes em ambas as variáveis (pode usar um loop ou fazer na mão).
4. Imprima o resultado final de ambas com muita precisão usando %.2f e depois %.6f.
- O Desafio: Explique no comentário por que o float simplesmente ignorou ou errou os centavos, enquanto o double manteve o cálculo correto.*/
/* Resposta: A precisão do float comum é de 6 digitos, e a precisão do double é de 15 digitos */


#include <stdio.h>

int main()
{

    float saldo_float = 1000000.00;

    double saldo_double = 1000000.00;

    for (int i = 0; i < 10; i++)
    {
        saldo_float = saldo_float + 0.1;

        saldo_double = saldo_double + 0.1;
    }

    printf("Valor do saldo_float: %.2f\n", saldo_float);

    printf("Valor do saldo_double: %.6f\n", saldo_double);

    return 0;

}