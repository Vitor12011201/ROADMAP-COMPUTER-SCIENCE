#include <stdio.h>

/* OBJETIVO: Usar typedef para criar tipos que "documentam" o codigo.
 * Mesmo que todos sejam 'int', o nome diz o que a variavel guarda.
 */

typedef int Ano;
typedef int Mes;
typedef int Dia;

int main() {
    // Fica muito mais claro o que cada variavel representa
    Ano atual = 2026;
    Mes marco = 3;
    Dia hoje = 15;

    printf("Data: %02d/%02d/%d\n", hoje, marco, atual);

    return 0;
}