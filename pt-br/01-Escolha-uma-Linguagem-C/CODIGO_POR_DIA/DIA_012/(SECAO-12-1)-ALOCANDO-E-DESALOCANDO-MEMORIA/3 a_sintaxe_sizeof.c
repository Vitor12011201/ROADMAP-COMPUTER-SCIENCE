#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Mostrar a forma mais segura de alocar memória, usando a própria
variável para determinar o tamanho. Se você mudar o tipo de 'p' no futuro,
o malloc continuará funcionando corretamente sem mudar a linha. */

int main() {
    double *p;

    // Em vez de sizeof(double), usamos sizeof *p.
    // Como *p é um double, o resultado é o mesmo, mas mais "blindado" a erros.
    p = malloc(sizeof *p);

    if (p != NULL) {
        *p = 3.14159265;
        printf("Valor: %f\n", *p);
        free(p);
    }

    return 0;
}