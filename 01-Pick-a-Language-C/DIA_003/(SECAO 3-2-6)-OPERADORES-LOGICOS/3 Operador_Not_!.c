#include <stdio.h>

// Operador "Not" - !

int main() {
    int porta_aberta = 0; // Falso (está fechada)

    // !porta_aberta lê-se: "Se a porta NÃO estiver aberta"
    if (!porta_aberta) {
        printf("A porta esta fechada. Pode entrar.\n");
    }

    return 0;
}