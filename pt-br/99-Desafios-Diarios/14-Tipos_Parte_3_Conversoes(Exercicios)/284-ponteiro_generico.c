/* Objetivo: Praticar a atribuição implícita de e para void* e entender a limitação de desreferenciação.
Instruções:
1. Declare uma variável float temperatura = 36.5f;.
2. Crie um ponteiro genérico void *ptr_generico = &temperatura; (note que o compilador aceita isso perfeitamente sem reclamações).
3. Tente imprimir o valor diretamente usando printf("%f\n", *ptr_generico); apenas para ver o erro que o compilador gera.
4. Corrija o código criando um ponteiro específico float *ptr_especifico = ptr_generico; e use esse novo ponteiro para imprimir o valor 36.5 */

#include <stdio.h>

int main()
{

    float temperatura = 36.5f;

    void *ptr_generico = &temperatura;

    // printf("%f\n", *ptr_generico);

    float *ptr_especifico = ptr_generico;

    printf("%.2f\n", *ptr_especifico);

    return 0;

}