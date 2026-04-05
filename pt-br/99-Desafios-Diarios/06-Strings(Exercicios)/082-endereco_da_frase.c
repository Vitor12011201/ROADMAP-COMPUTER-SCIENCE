/*Objetivo: Visualizar que a variável guarda um endereço, não as letras.
1. Declare char *s = "C e uma linguagem incrivel";.
2. Imprima a string normalmente usando %s.
3. Agora, imprima o valor do ponteiro (o endereço de memória) usando %p.
Exemplo: printf("%p\n", s); */

#include <stdio.h>

int main()
{
    char *s = "C e uma linguaguem incrivel";
    printf("%s\n", s);
    printf("O endereco na memoria do ponteiro s e: [%p]\n", s);
    printf("O tamanho do ponteiro s e: [%zu]", sizeof(s));
}
