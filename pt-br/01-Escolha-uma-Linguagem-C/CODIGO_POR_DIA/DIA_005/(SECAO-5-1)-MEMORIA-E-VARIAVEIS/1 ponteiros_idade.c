#include <stdio.h>

int main(void) {
    // Uma variavel comum. O C reserva um "armario" na memoria,
    // coloca o numero 22 la dentro e batiza o armario de 'idade'.
    int idade = 22;

    // O operador '&' (E comercial) e a chave para descobrir
    // QUAL e o numero da porta desse armario.
    // Usamos %p para imprimir esse endereco (em hexadecimal).
    printf("O valor guardado no armario 'idade' e: %d\n", idade);

    // O (void *) e apenas para o printf nao reclamar, foque no &idade
    printf("O numero da porta (endereco) de 'idade' e: %p\n", (void *)&idade);

    return 0;
}