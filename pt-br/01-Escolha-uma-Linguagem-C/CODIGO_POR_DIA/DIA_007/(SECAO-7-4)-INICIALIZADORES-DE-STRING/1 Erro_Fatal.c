#include <stdio.h>

/*
 * Objetivo: Mostrar que ponteiros para literais apontam para memoria de leitura.
 */

int main() {
    // 's' aponta para uma regiao protegida da memoria
    char *s = "Imutavel";

    printf("String original: %s\n", s);

    // s[0] = 'a'; // PERIGO: Isso causaria um crash (Segmentation Fault)
    // Motivo: Voce nao tem permissao de escrita no segmento de texto do sistema.

    printf("Ponteiros para literais devem ser tratados como constantes!\n");
    return 0;
}