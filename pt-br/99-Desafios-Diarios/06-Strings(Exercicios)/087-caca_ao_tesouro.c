/* Objetivo: Encontrar um caractere específico dentro de uma string-array.
1. Crie uma string char frase[] = "O rato roeu a roupa do rei";.
2. Use um loop para percorrer a string e contar quantas vezes a letra 'r' (minúscula) aparece.
3. No final, imprima o total encontrado.*/

#include <stdio.h>

int main()
{
    int posicao[100];
    int contador = 0;
    char frase[] = "O rato roeu a roupa do rei";

    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == 'r')
        {
            posicao[contador] = i;
            contador++;
        }
    }
    printf("O numero de 'r' que aparece no Array frase[] e de: [%d] vezes\n", contador);
    printf("Os 'r' encontrados da String estao nos localizados nas posicoes: \n");

    for (int i = 0; i < contador; i++)
    {
        printf("- frase[%d] ", posicao[i]);
    }
    printf("\n");
}
