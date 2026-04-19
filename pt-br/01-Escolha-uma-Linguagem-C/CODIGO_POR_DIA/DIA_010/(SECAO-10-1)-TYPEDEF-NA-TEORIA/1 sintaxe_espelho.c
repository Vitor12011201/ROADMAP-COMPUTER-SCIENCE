#include <stdio.h>

/* OBJETIVO: Entender que a sintaxe do typedef segue a de uma variavel comum.
 * Basta colocar a palavra 'typedef' na frente da declaracao.
 */

int main() {
    // Declaracao comum:
    // int x;

    // Declaracao com typedef:
    typedef int numero; // 'numero' agora representa o tipo 'int'

    numero meu_valor = 100;
    printf("Valor: %d\n", meu_valor);

    return 0;
}