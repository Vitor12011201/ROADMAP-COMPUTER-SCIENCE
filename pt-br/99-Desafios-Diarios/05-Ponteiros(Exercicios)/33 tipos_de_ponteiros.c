/* Declare um float f = 10.5;
Declare um ponteiro para esse float: float *ptr;
Aponte o ponteiro para a variável: ptr = &f;
Imprima o endereço usando %p e o ponteiro ptr.*/

#include <stdio.h>

int main() {
    float f = 10.5;
    float *ptr;
    ptr = &f;
    printf("O endereco da variavel f e: %p\n", (void *) ptr);
    printf("O endereco da variavel f e: %p", (void *) &f);
}