#include <stdio.h>

/*
 * Objetivo: Mostrar que a inicializacao de array cria uma COPIA alteravel.
 */

int main() {
    // Aqui, o C copia os bytes de "Mutavel" para o seu proprio array 't'
    char t[] = "Mutavel";

    printf("Antes:  %s\n", t);

    // Como 't' eh um array no seu escopo, voce pode mudar os valores
    t[0] = 'm';
    t[5] = 'i';

    printf("Depois: %s\n", t); // Imprime "mutavil"
    return 0;
}