/* Objetivo: Provar por conta própria por que o truque do sizeof falha dentro de funções.
Este exercício é para você ver o erro acontecendo:
Crie uma função chamada tentar_medir(int x[]).
Dentro dessa função, tente calcular o tamanho do array usando o truque: int tam = sizeof(x) / sizeof(int); e mande imprimir esse tam.
No seu main, crie um array int lista[10] = {0,1,2,3,4,5,6,7,8,9};.
Primeiro, calcule e imprima o tamanho dele dentro do main.
Depois, chame a função tentar_medir(lista) e veja o que ela imprime.*/

#include <stdio.h>

int tentar_medir(int x[])
{
    int tamanho = sizeof(x) / sizeof(int);
    return tamanho;
}

int main()
{
    int lista[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tamanho_no_main = sizeof(lista) / sizeof(int);
    int tamanho_na_funcao = tentar_medir(lista);
    printf("Tamanho do array dentro do MAIN [%d] Bytes - (CORRETO)\n", tamanho_no_main);
    printf("Tamanho do array dentro da FUNCAO [%d] Bytes - (INCORRETO)\n", tamanho_na_funcao);
}
