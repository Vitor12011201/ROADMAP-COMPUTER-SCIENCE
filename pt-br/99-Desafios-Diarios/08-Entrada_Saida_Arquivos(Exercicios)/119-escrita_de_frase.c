/* Objetivo: Escrever uma frase inteira usando fputs().
1. Abra um arquivo chamado notas.txt no modo "w".
2. Use a função fputs("Estudando a linguagem C\n", fp); para escrever uma frase.
3. Feche o arquivo.*/

//Desafio: Rode o programa, veja o arquivo. Depois, mude o modo para "a" (append), mude a frase para "Segunda linha!" e rode de novo. O que aconteceu com o arquivo?

#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("notas.txt", "w");

    fputs("Estudando a linguagem C\n", fp);

    fclose(fp);

    return 0;
}
