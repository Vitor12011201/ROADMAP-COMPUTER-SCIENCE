/* Objetivo: Usar malloc para alocar espaço para um único inteiro e entender o conceito de free.
1. Inclua <stdlib.h>.
2. Declare um ponteiro para inteiro: int *p;.
3. Use p = malloc(sizeof(int)); para reservar espaço.
4. Verifique se p não é NULL (isso acontece se o PC ficar sem memória).
5. Atribua um valor a *p, imprima-o e depois use free(p); para liberar a memória.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;

    p = malloc(sizeof(int));

    if (p == NULL)
    {
        printf("Acabou memoria\n");
        return 1;
    }

    *p = 15;

    printf("%d\n", *p);

    free(p);

    p = NULL;

    return 0;
}