/* Objetivo: Praticar a diferença entre a saída comum e a saída de erro.
1. Use o fprintf(stdout, "Isso e uma mensagem normal.\n"); para imprimir algo.
2. Use o fprintf(stderr, "Isso e um aviso de erro!\n"); logo abaixo.
3. No console, os dois vão aparecer iguais. Mas agora você sabe que, se estivesse em um servidor, poderia salvar o erro em um arquivo separado sem "sujar" o log de mensagens normais.*/

#include <stdio.h>

int main()
{
    fprintf(stdout, "Isso e uma mensagem normal.\n");

    fprintf(stderr, "Isso e um aviso de erro!\n");

    return 0;
}
