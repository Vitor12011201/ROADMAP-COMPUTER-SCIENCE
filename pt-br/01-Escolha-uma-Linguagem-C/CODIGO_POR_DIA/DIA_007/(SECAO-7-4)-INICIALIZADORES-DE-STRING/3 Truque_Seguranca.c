#include <stdio.h>

/*
 * Objetivo: Demonstrar como evitar tentativas de mutacao em tempo de compilacao.
 */

int main() {
    // O 'const' avisa: "Nao tente mudar o que este ponteiro aponta"
    const char *mensagem = "Mensagem Protegida";

    printf("%s\n", mensagem);

    // Se voce tentasse fazer: mensagem[0] = 'A';
    // O compilador daria um ERRO e nem geraria o executavel.

    return 0;
}