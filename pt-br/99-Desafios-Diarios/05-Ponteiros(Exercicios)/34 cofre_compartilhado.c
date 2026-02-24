/*O cenário:
Você tem uma conta bancária (uma variável float). Duas pessoas (dois ponteiros) têm o endereço dessa conta. Se uma pessoa mudar o valor lá dentro, a outra verá a mudança, porque o endereço é o mesmo!
Instruções para o seu código:
Declare uma variável float saldo = 500.00;.
Declare dois ponteiros para float: float *p1; e float *p2;.
Aponte ambos os ponteiros para a variável saldo.
Imprima o endereço de saldo usando o &.
Imprima o endereço guardado em p1 e em p2 (deve ser tudo igual!).
Desafio Extra: Use o sizeof para imprimir quanto espaço o ponteiro p1 ocupa na memória (Dica: Use %zu).*/

#include <stdio.h>

int main () {

    float saldo = 500.00;
    float *p_1;
    float *p_2;
    p_1 = &saldo;
    p_2 = &saldo;
    printf("O endereco da variavel saldo e: %p\n", (void *) &saldo);
    printf("O endereco do ponteiro p_1 e: %p\n", (void *) p_1);
    printf("O endereco do ponteiro p_2 e: %p\n", (void *) p_2);
    printf("O tamanho do ponteoro p_1 e: %zu\n", sizeof(p_1));
}