/* Objetivo: Compreender como o cast de um ponteiro altera drasticamente o comportamento da aritmética de ponteiros (avançar posições na memória).
Instruções:
1. Declare um array de inteiros: int matriz[4] = {10, 20, 30, 40};.
2. Crie um ponteiro de inteiro apontando para o início: int *ptr_int = matriz;.
3. Imprima o valor de *(ptr_int + 1). Você verá o número 20, pois o C sabe que um int ocupa 4 bytes e avança o offset correto.
4. Agora, crie um ponteiro de caractere fazendo um cast explícito: char *ptr_char = (char *)matriz;.
5. Imprima o valor de *(ptr_char + 1) como um inteiro (%d). */

#include <stdio.h>

int main()
{
    int matriz[4] = {10 , 20 , 30 , 40};

    int *ptr_int = matriz;

    printf("*(ptr_int + 1): %d\n", *(ptr_int + 1));

    char *ptr_char = (char *)matriz;

    printf("*(ptr_char + 1): %d\n", *(ptr_char + 1));

    return 0;
}
