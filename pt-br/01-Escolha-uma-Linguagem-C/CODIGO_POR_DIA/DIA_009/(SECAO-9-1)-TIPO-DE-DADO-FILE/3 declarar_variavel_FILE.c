#include <stdio.h>

/* OBJETIVO: Declarar a variavel FILE* que servira de ponte para o arquivo.
 */

int main() {
    // Criamos o "ponteiro" para arquivo. Ele ainda nao aponta para nada (NULL).
    FILE *meu_controle_remoto = NULL;

    if (meu_controle_remoto == NULL) {
        printf("O controle ainda nao esta ligado a nenhum arquivo.\n");
    }

    return 0;
}