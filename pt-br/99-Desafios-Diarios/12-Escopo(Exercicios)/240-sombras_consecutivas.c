/* Objetivo: Praticar o sombreamento em múltiplos níveis de blocos aninhados.
Instruções:
1. Crie um loop for (int i = 0; i < 3; i++).
2. Dentro do bloco do for, imprima o valor de i.
3. Ainda dentro do for, abra um novo bloco de chaves { } (sem nenhuma estrutura como if ou while, apenas as chaves puras).
4. Dentro desse novo bloco interno, declare int i = 50; e imprima o valor.
5. Rode o programa e observe como a contagem do loop continua funcionando perfeitamente, mesmo com o i sendo "escondido" temporariamente no bloco mais interno.*/

#include <stdio.h>

int main()
{

    for (int i = 0; i < 3; i++)
    {
        printf("valor do i: %d\n", i);

        {
            int i = 50;
            printf("valor de i: %d\n", i);
        }

    }

    return 0;

}