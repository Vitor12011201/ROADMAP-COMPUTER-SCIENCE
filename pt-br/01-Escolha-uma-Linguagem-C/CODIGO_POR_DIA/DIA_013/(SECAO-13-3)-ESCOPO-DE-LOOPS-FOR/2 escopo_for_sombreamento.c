#include <stdio.h>

/* OBJETIVO: Ilustrar o conceito de 'Shadowing' (Sombreamento). Ao declarar uma nova
   variável com o mesmo nome 'i' dentro das chaves do loop, ela esconde a variável
   do loop original, ocupando um endereço diferente na memória. */

int main() {
    // O 'i' externo controla as repetições (vai de 0 a 4)
    for (int i = 0; i < 5; i++) {

        // Este 'i' interno "sombra" o 'i' do loop
        int i = 999;

        // Sempre imprimirá 999, pois o C prioriza o escopo mais interno ativo
        printf("Valor ocultado pelo sombreamento: %d\n", i);
    }

    return 0;
}