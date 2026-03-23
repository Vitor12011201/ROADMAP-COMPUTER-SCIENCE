/*Objetivo: Manipular o \0 para juntar (concatenar) duas strings manualmente.
1. Crie dois arrays: char destino[20] = "Ola "; e char origem[] = "Mundo";.
2. Encontre onde está o \0 no array destino.
3. Começando exatamente naquela posição, use um loop para copiar as letras de origem para dentro de destino.
Não esqueça: No final de tudo, você precisa colocar um \0 manualmente no final do destino para o printf não se perder!
4. Imprima destino e veja se ele virou "Ola Mundo".*/

#include <stdio.h>
#include <string.h>

int main()
{
    char destino[20] = "Ola";
    char origem[] = "Mundo";

    int i = strlen(destino);
    int j = 0;

    while (origem[j] != '\0')
    {
        destino[i] = origem[j];
        i++;
        j++;
    }
    destino[i] = '\0';

    printf("Resultado final [%s]\n", destino);

    return 0;
}