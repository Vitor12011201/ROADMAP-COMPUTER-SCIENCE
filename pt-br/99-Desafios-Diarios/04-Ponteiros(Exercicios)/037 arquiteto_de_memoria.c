/* No main, declare um double real = 10.5; (Dica: double costuma ocupar 8 bytes).
Declare um ponteiro double *ptr = &real;.
Tente adivinhar (e depois use printf com %zu para confirmar):
Qual o sizeof(real)?
Qual o sizeof(ptr)?
Qual o sizeof(*ptr)?*/

#include <stdio.h>

int main() {
    double real = 10.5;
    double *ptr = &real;

    printf("O tamanho de %.2f e igual a %zu Bytes\n", real, sizeof(real)); // Esse vai dar 8 Bytes pois devolve o valor que o programa separa para um double
    printf("O tamanho de ptr e igual a %zu Bytes\n", sizeof(ptr)); // Esse vai retornar 8 Bytes tambem mas ele retorna o endereço da variavel Real e não o valor de um double
    printf("O tamanho de *ptr e igual a %zu Bytes\n", sizeof(*ptr)); // Esse tambem vai retornar 8 Bytes pois devolve o valor que o programa separa para um double


    char letra = 'A';
    char *ptr_2 = &letra;

    printf("O tamanho da variavel Letra e igual a (%zu Bytes)\n", sizeof(letra));
    printf("O tamanha do endereco de ponteiro da variavel Letra e igual a (%zu Bytes)\n", sizeof(ptr_2));
    printf("O tamanho do que esta dentro do ponteiro *ptr e igual a (%zu Bytes)\n", sizeof(*ptr_2));
}