#include <stdio.h>
#include <limits.h> // Contém as constantes de limites como UINT_MAX

/* OBJETIVO: Visualizar o comportamento de estouro de memória (overflow). Quando uma
   variável 'unsigned' ultrapassa seu limite máximo, ela reseta e volta para o zero. */

int main() {
    // UINT_MAX representa o maior valor que o unsigned int da sua máquina pode guardar
    unsigned int limite_maximo = UINT_MAX;

    printf("Maior valor unsigned possível neste sistema: %u\n", limite_maximo);

    // O que acontece se somarmos 1 ao limite máximo?
    unsigned int teste_overflow = limite_maximo + 1;

    // O valor "da a volta" no relógio de bits e retorna ao valor mínimo (0)
    printf("Valor após o estouro (limite + 1): %u\n", teste_overflow);

    return 0;
}