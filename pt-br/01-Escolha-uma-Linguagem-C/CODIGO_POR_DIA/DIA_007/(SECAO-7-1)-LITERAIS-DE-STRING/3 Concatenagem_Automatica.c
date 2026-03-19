#include <stdio.h>

/*
 * Objetivo: Mostrar como organizar strings longas no código fonte.
 */
int main() {
    // O compilador junta essas duas linhas em uma unica string na memoria
    char longo[] = "Esta eh uma string muito longa que "
                   "foi quebrada em duas linhas no codigo.";

    printf("%s\n", longo);

    return 0;
}