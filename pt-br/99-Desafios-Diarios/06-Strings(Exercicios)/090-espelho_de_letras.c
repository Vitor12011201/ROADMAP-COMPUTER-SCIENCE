/*Objetivo: Manipular endereços e valores ao mesmo tempo.
1. Declare char texto[] = "ABCDE";.
2. Crie um ponteiro que aponte para esse array: char *p = texto;.
3. Usando apenas o ponteiro p, mude a letra 'C' para 'X'.
4. Agora, use o ponteiro para pular a primeira letra (p++) e imprima a string a partir daí.*/

#include <stdio.h>

int main()
{
    char texto[] = "ABCDE";
    char *p = texto;
    printf("O texto original e: [%s]\n", p);
    p[2] = 'X';
    p++;
    printf("O texto foi modificado para: [%s]", p);

    return 0;
}
