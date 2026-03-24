/* Objetivo: Ver a diferença entre apontar e copiar.
1. Crie uma string char original[] = "C e top";.
2. Crie um ponteiro char *copia_falsa = original;.
3. Crie um array char copia_real[20]; e use strcpy(copia_real, original);.
4. Mude a primeira letra da copia_falsa para 'B'.
5. Imprima as três: original, copia_falsa e copia_real.*/

#include <stdio.h>
#include <string.h>

int main() {

    char original[] = "C e top";
    char *copia_falsa = original;
    char copia_real[20];
    strcpy(copia_real, original);
    copia_falsa[0] = 'B';
    printf("original[] = %s - Endereco da memoria [%p]\n", original, original);
    printf("copia_falsa = %s - Endereco na memoria [%p]\n", copia_falsa, &copia_falsa);
    printf("copia_real = %s - Endereco na memoria [%p]\n", copia_real, &copia_real);

    return 0;
}