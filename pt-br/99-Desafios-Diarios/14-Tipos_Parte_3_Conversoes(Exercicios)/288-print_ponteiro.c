/* Objetivo: Silenciar o aviso clássico do compilador ao imprimir endereços de memória.
Instruções:
1. Declare uma variável double pi = 3.14159;.
2. Crie um ponteiro específico double *ptr_pi = &pi;.
3. Tente imprimi-lo usando printf("%p\n", ptr_pi); e ative todas as flags de aviso no seu compilador (-Wall -Wextra).
4. Corrija o warning aplicando o cast explícito para o ponteiro genérico exigido: (void *)ptr_pi. */

#include <stdio.h>

int main(void)
{
    double pi = 3.14159;
    double *ptr_pi = &pi;

    printf("%p\n", (void *)ptr_pi);

    return 0;
}