/*Para declarar um ponteiro, usamos o asterisco *.
A regra é: o tipo do ponteiro deve ser o mesmo tipo da variável que ele vai apontar.
*/

#include <stdio.h>

int main(void) {
int numero_inteiro = 100;
float saldo_bancario = 50.50;

// DECLARAÇÃO:
// "p_int" é um ponteiro para inteiro (int-pointer)
int *p_int;

// "p_float" é um ponteiro para um número decimal (float-pointer)
float *p_float;

// ATRIBUIÇÃO:
// O ponteiro recebe o endereço da variável do mesmo tipo.
// Isso é perfeito! int* recebe &int.
p_int = &numero_inteiro;

// E float* recebe &float.
p_float = &saldo_bancario;

printf("Endereco do inteiro: %p\n", (void *)p_int);
printf("Endereco do saldo:   %p\n", (void *)p_float);

return 0;
}