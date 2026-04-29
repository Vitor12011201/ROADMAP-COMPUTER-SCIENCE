/* Objetivo: Simular o acesso a dados estruturados onde você precisa "pular" elementos de forma manual.
1. Crie um array de int com 10 números (de 1 a 10).
2. Crie um ponteiro int *ptr = &array[0];.
3. Crie um loop que imprima apenas os números nas posições pares do array (índice 0, 2, 4, 6, 8).
O Desafio: Você deve fazer isso incrementando o ponteiro de 2 em 2 dentro do loop (usando ptr += 2 ou imprimindo *(ptr + i) onde o i aumenta de 2 em 2).
4. Imprima o valor e o endereço hexadecimal de cada salto para confirmar que ele está pulando o equivalente a dois inteiros (8 bytes se o int for 4).*/

#include <stdio.h>

int main() {

    int array[10] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};

    int *ptr = &array[0];

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            printf("O indice %d tem o Numeros no array: %d\nSeu endereco Hexadecimal e: %p\n", i, *(ptr + i), ptr + i);
            printf("\n");
        }
    }

    return 0;

}