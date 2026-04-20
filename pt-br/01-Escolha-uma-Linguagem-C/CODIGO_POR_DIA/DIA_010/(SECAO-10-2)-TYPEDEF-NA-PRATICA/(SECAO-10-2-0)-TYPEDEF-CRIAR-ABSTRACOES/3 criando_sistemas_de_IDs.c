#include <stdio.h>

/* OBJETIVO: Criar uma camada de abstracao para IDs do sistema.
 * Se amanha o ID precisar de mais espaco (mudar para long), voce altera so o typedef.
 */

typedef int UsuarioID;

void imprimir_id(UsuarioID id) {
    printf("Processando ID: %d\n", id);
}

int main() {
    // Usamos o nome semantico 'UsuarioID' em vez do generico 'int'
    UsuarioID admin = 1001;
    UsuarioID visitante = 5005;

    imprimir_id(admin);
    imprimir_id(visitante);

    return 0;
}