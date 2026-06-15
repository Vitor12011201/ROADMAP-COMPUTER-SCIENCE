/* Objetivo: Entender a diferença prática entre uma constante com e sem o sufixo f.
Instruções:
1. O C trata qualquer número com ponto (ex: 3.14) como double por padrão. Para forçar o compilador a tratá-lo como float, precisamos colocar o f no final (3.14f).
2. No seu main, declare float sem_f = 0.123456789012345; e double com_d = 0.123456789012345;.
3. Imprima ambos usando %.15f.
O que observar: Veja como a falta do sufixo f ou a escolha do tipo errado faz o número se corromper logo após a barreira dos dígitos seguros. */

#include <stdio.h>

int main()
{

    float sem_f = 0.123456789012345;

    double com_d = 0.123456789012345;

    printf("sem_f : %.15f\n", sem_f);

    printf("com_d : %.15f\n", com_d);

    return 0;

}

