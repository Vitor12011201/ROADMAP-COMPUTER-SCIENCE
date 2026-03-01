/* Crie uma variável int vida = 100;.
Crie um ponteiro int *ptr e aponte para vida.
Mude o valor da vida para 80 usando apenas o ponteiro (o operador *).
Imprima o valor da variável vida no final.*/

#include <stdio.h>

int main () {

    int vida = 100;
    int *prt = &vida;
    printf("A vida do personagem e: %d\n", vida);
    *prt = 80;
    printf("A vida do personagem agora e: %d" , vida);
}