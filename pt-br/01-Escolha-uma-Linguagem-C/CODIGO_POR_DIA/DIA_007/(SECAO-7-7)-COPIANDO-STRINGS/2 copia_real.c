#include <stdio.h>
#include <string.h> // Necessario para strcpy

/*
 * Objetivo: Criar uma copia independente da string.
 */
int main() {
    char s[] = "C eh incrivel";
    char t[50]; // Criamos um "balde" vazio com espaco suficiente

    // strcpy(destino, origem)
    // Pense como: t = s (se o '=' funcionasse)
    strcpy(t, s);

    // Agora podemos mudar 't' sem medo de estragar 's'
    t[0] = 'X';

    printf("S (intacto): %s\n", s); // "C eh incrivel"
    printf("T (alterado): %s\n", t); // "X eh incrivel"

    return 0;
}