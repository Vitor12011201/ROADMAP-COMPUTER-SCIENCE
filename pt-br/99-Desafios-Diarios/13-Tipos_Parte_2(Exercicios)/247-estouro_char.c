/* Objetivo: Romper o limite de um unsigned char para ver o efeito de transbordamento (overflow) em um único byte.
Instruções:
1. Declare um unsigned char byte = 255; (o limite máximo de 8 bits).
2. Use um loop for que rode 5 vezes.
3. A cada iteração do loop, adicione 1 à variável byte (byte++) e imprima o seu valor numérico com %d.
O Desafio: Explique em um comentário por que o número não foi para 256, mas sim "resetou" voltando a contar do zero. O que aconteceria se a variável fosse um signed char inicializado em 127? */
/*Resposta:
Um unsigned char possui 8 bits, podendo armazenar valores de 0 a 255.
Quando o valor 255 recebe +1, o resultado matemático seria 256, mas
256 precisa de 9 bits para ser representado. Como a variável possui
apenas 8 bits, o bit excedente é descartado e o valor volta para 0.
Esse fenômeno é chamado de overflow (transbordamento).
Se fosse um signed char, o intervalo seria de -128 a 127. Ao incrementar
127, o valor normalmente passaria para -128 devido à forma como números
negativos são armazenados em complemento de dois.
*/

#include <stdio.h>

int main()
{

    unsigned char byte = 255;

    for (int i = 0; i < 5; i++)
    {
        printf("Valor numerico da variavel (byte): %d\n", byte);
        byte++;
    }

    return 0;

}