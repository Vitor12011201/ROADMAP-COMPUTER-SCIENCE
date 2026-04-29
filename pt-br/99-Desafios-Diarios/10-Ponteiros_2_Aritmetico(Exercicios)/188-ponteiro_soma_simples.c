/* Objetivo: Praticar a sintaxe *(p + n) para acessar elementos sem usar colchetes.
1. Crie um array int valores[4] = {10, 20, 30, 40};.
2. Crie um ponteiro int *ptr = valores;.
3. Sem usar loops, use o printf para imprimir o segundo e o quarto elemento do array usando apenas a sintaxe de soma de ponteiros (ex: *(ptr + n)).
4. Imprima também o endereço de memória de cada um desses dois elementos para ver o salto de bytes.*/

#include <stdio.h>

int main() {

    int valores[4] = {10 , 20 , 30 , 40};

    int *ptr = valores;

    printf("O segundo elemento do Array e: %d\n", *(ptr + 1));
    printf("O quarto elemento do Array e: %d\n", *(ptr + 3));

    return 0;

}