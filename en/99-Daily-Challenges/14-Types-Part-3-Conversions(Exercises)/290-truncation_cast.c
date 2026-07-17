/* Objetivo: Usar o cast explícito para assumir a responsabilidade ao reduzir o tamanho de um dado, observando o que acontece quando o valor não cabe no tipo de destino.
Instruções:
1. Declare um inteiro de 32 bits com um valor alto: int valor_grande = 300;.
2. Crie uma variável do tipo char (que geralmente só aguenta até 127 ou 255 se for unsigned): char valor_curto;.
3. Se você fizer valor_curto = valor_grande; direto, o compilador vai te dar um aviso de perda de dados. Silencie o aviso usando o cast explícito: valor_curto = (char)valor_grande;.
4. Imprima o valor_curto usando %d. */

#include <stdio.h>

int main(void)
{
    int large_value = 300;
    char short_value;

    short_value = (char)large_value;

    printf("%d\n", short_value);

    return 0;
}

