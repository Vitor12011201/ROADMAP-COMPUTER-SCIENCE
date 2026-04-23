#include <stdio.h>

/* OBJETIVO: Criar um apelido que já inclui o asterisco (*).
   Isso permite declarar ponteiros sem usar o símbolo '*' explicitamente na variável. */

typedef int* IntPtr;

int main() {
    int numero = 42;

    // IntPtr já significa 'int *', então 'p' é um ponteiro
    IntPtr p = &numero;

    printf("Valor via ponteiro: %d\n", *p);
    return 0;
}