/* Objetivo: Implementar o truque lógico para descobrir se o seu compilador trata o char padrão como signed ou unsigned.
Instruções:
1. No main, crie um teste condicional (if) comparando se CHAR_MAX == UCHAR_MAX.
2. Se for igual, imprima:"Neste sistema, o char padrao e UNSIGNED.".
3. Se for diferente, imprima: "Neste sistema, o char padrao e SIGNED.".
4. Imprima também o valor de CHAR_MIN para cravar o veredito (se der 0, é sem sinal; se der -128, é com sinal). */

#include <stdio.h>
#include <limits.h>

int main()
{

    if (CHAR_MAX == UCHAR_MAX)
    {
        printf("Neste sistema, o char padrao e UNSIGNED.");
    } else
    {
        printf("Neste sistema, o char padrao e SIGNED.");
    }

    printf("\n");

    printf("Valor minimo do Char: %d\n", CHAR_MIN);

    return 0;

}