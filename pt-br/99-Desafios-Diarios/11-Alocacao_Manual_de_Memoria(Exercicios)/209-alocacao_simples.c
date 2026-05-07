/* Objetivo: Praticar a alocação de um único valor e a verificação de segurança.
1. Aloque memória para um float.
2. Verifique se o ponteiro é nulo: if (p == NULL) { return 1; }.
3. Guarde o valor 3.14 nessa memória.
4. Imprima o valor e o endereço de memória.
5. Liberte a memória e tente explicar por que não devemos usar printf("%f", *p) após o free(p).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float memoria = 3.14;

    float *p = malloc( sizeof(float));

    if (p == NULL)
    {
        printf("Erro de memoria\n");
        return 1;
    }

    *p = memoria;

    printf("Valor: %.2f\n", *p);

    printf("Endereco na memoria: %p\n", p);

    free(p);

    p = NULL;

    return 0;

}