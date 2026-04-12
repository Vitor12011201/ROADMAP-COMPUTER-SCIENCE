/* Objetivo: Praticar a modificação real em arrays.
1. Declare um array de char: char nome[] = "daniel";.
2. Crie uma função void mudar_letras(char s[]) que transforma o nome daniel em samuel.
3. Chame a função passando o seu array.
4. Imprima o resultado no main e veja que "daniel" virou "samuel" de verdade na memória.*/

#include <stdio.h>

void mudar_letras(char *nome)
{
    printf("O nome passou de: [%s]\n", nome);
    nome[0] = 's', nome[2] = 'm', nome[3] = 'u';
    printf("Para o nome: [%s]\n", nome);
}

int main()
{
    char nome[] = "daniel";
    mudar_letras(nome);
    printf("Quero mostrar que apos da funcao os valores mudaram dentro da memoria: [%c], [%c], [%c]\n", nome[0],
           nome[2], nome[3]);

    return 0;
}
