#include <stdio.h>

/*
 * Objetivo: Mostrar que igualar ponteiros nao copia os dados.
 */
int main() {
    char original[] = "Original";
    char *apelido;

    // ISSO NAO COPIA A STRING!
    // 'apelido' agora aponta para o mesmo lugar que 'original'
    apelido = original;

    // Se mudarmos o apelido...
    apelido[0] = 'X';

    // ...o original tambem muda!
    printf("Original: %s\n", original); // Imprime "Xriginal"
    printf("Apelido:  %s\n", apelido);  // Imprime "Xriginal"

    return 0;
}