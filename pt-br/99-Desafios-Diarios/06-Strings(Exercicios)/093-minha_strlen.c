/*Objetivo: Recriar a função strlen do zero para entender como ela funciona por dentro.
1. Crie sua própria função: int meu_tamanho_string(char *s).
2. Dentro dela, use um ponteiro ou um contador para percorrer a string até achar o \0.
3. No main, compare o resultado da sua função com o resultado da strlen() oficial para a frase "Engenharia de Software".*/

#include <stdio.h>
#include <string.h>

int meu_tamanho_string(char* s)
{
    int contador = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        contador++;
    }
    return contador;
}

int main()
{
    char frase[] = "Engenharia de Software";
    // Comparando a contagem manual contra a função oficial da biblioteca
    printf("A quantidade de espaco que o array frase[] ocupa sem o nulo e igual a: [%d]\n", meu_tamanho_string(frase));
    printf("A quantidade de espaco que o array frase[] ocupa sem o nulo e igual a: [%zu]\n", strlen(frase));

    return 0;
}
