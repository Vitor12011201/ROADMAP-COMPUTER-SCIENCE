#include <stdio.h>

/* OBJETIVO: Demonstrar que ponteiros também podem "andar para trás" na memória
   usando o operador de decremento (--). */

int main() {
    int a[] = {10, 20, 30};
    int *p = &a[2]; // Começamos no ÚLTIMO elemento (30)

    printf("Lendo de trás para frente:\n");
    while (p >= &a[0]) {
        printf("%d ", *p);
        p--; // Move para o endereço ANTERIOR
    }
    printf("\n");

    return 0;
}