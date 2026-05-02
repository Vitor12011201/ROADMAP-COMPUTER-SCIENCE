/* Objetivo: Entender a única grande diferença prática entre array e ponteiro.
1. No main, declare um int lista[10]; e um ponteiro int *ptr = lista;.
2. Imprima o sizeof(lista) e o sizeof(ptr).
3. O Desafio: Explique (em um comentário no código) por que os valores são diferentes, mesmo que ambos "apontem" para o mesmo lugar.
Resposta: O sizeof(lista) contem 40 Bytes de tamanho, pois ele ocupa o array inteiro de 10 itens int,
O ponteiro *ptr ocupa 8 Bytes de tamanho, pois um ponteiro não armazena um elemento, ele armazena um endereço de memória.
4. Tente fazer lista++ e veja o erro que o compilador te dá. Comente essa linha para o código compilar, mas anote o erro.*/

#include <stdio.h>

int main()
{

    int lista[10];
    int *ptr = lista;

    printf("Tamanho Lista: %zu Bytes\n" , sizeof(lista));
    printf("Tamanho ptr: %zu Bytes\n", sizeof(ptr));

    // lista++; Erro: O nome do array (lista) é como um ponteiro constante, não pode mudar para onde ele aponta

    return 0;
}