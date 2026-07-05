/* Objetivo: Investigar o comportamento do seu compilador quando tentamos truncar um número em um tipo signed menor onde ele não cabe.
Instruções:
1. Declare um int valor_original = 130;.
2. Tente forçar esse valor para dentro de um signed char teste_sinal;. O limite máximo de um signed char é 127. O valor 130 estoura esse limite por 3 unidades.
3. Faça a atribuição: teste_sinal = (signed char)valor_original; (usando o cast explícito).
4. Imprima o valor de teste_sinal usando %d.
O Desafio: Veja o resultado na tela (provavelmente um número negativo como -126). Explique no comentário como o corte de bits extras faz o bit mais à esquerda virar 1, transformando um número originalmente positivo em um número negativo na representação em Complemento de Dois do seu processador.*/
/*  Resposta: O número 130 ultrapassa o limite positivo do signed char. Ao guardar apenas os 8 bits finais, o padrão binário fica 10000010. Como o primeiro bit é 1, o processador interpreta esse valor como negativo em complemento de dois. Por isso o resultado vira -126.*/

#include <stdio.h>

int main()
{
    int valor_original = 130;
    signed char teste_sinal;

    teste_sinal = (signed char)valor_original;

    printf("teste_sinal: %d\n", teste_sinal);

    return 0;

}