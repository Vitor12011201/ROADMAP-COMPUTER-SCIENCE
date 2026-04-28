/*Objetivo: Visualizar como o endereço de memória muda de acordo com o tipo.
1. Crie um array int numeros[2] = {10, 20};.
2. Crie um ponteiro int *p = &numeros[0];.
3. Imprima o endereço contido em p e o valor *p.
4. Agora, faça p++; (isso é aritmética de ponteiros!).
5. Imprima novamente o endereço em p e o valor *p.
Observe: O endereço aumentou em 4?*/

#include <stdio.h>

int main() {

    int numeros[2] = {10 , 20};

    int *p = &numeros[0];

    printf("Endereco contido em p: %.p\n", p);
    printf("O valor contido em *p: %d\n", *p);

    p++;

    printf("Endereco contido em p: %.p\n", p);
    printf("O valor contido em *p: %d\n", *p);

    return 0;

}