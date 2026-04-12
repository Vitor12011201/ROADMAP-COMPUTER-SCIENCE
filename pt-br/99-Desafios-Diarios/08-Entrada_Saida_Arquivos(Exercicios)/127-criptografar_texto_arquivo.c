/* Objetivo: Manipular os caracteres lidos antes de exibir.
1. Leia o arquivo hello.txt caractere por caractere.
2. A Lógica: Se o caractere for uma vogal (a, e, i, o, u), substitua-a por um asterisco * na hora de imprimir com o printf.
3. Se não for vogal, imprima o caractere normal.
Exemplo: "Hello" vira "H*ll*"
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    int c;

    fp = fopen("Ola.txt", "w");

    if (fp == NULL)
    {
        fprintf(stderr,"Esse arquivo nao foi encontrado\n");
        return 1;
    }

    fputs("Ola, Mundo\n", fp);

    fclose(fp);

    fp = fopen("Ola.txt", "r");

    if (fp == NULL)
    {
        fprintf(stderr,"Esse arquivo nao foi encontrado\n");
        return 1;
    }

    while ((c = getc(fp)) != EOF)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            c = '*';
        }
        printf("%c", c);
    }

    fclose(fp);

    return 0;
}
