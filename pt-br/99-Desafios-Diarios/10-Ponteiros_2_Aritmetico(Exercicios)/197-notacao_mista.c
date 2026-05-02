/* Objetivo: Praticar a fórmula a[b] == *(a + b) de forma cruzada.
1. Crie um array int nums[] = {10, 20, 30, 40, 50};.
2. Crie um ponteiro int *p = nums;.
3. Imprima o valor 40 (índice 3) de três formas diferentes em um único printf:
- Usando o array com aritmética: *(nums + 3).
- Usando o ponteiro com colchetes: p[3].
- Usando o ponteiro com aritmética: *(p + 3).*/

#include <stdio.h>

int main()
{

    int nums[] = {10 , 20 , 30 , 40 , 50};

    int *p = nums;

    printf("Usando *(nums + 3) : %d\n", *(nums + 3));

    printf("Usando p[3] : %d\n", p[3]);

    printf("Usando *(p + 3) : %d\n", *(p + 3));

    return 0;

}