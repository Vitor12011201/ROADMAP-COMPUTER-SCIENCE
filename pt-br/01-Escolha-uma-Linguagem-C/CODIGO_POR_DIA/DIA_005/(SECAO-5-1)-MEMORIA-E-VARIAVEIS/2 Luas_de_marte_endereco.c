#include <stdio.h>

int main(void) {
    // Uma variável comum que guarda um número inteiro
    int luas_de_marte = 2;

    // O '*' no tipo indica que esta variável é um PONTEIRO.
    // 'ponteiro_endereco' vai guardar o endereço (a localização) de um inteiro.
    int *ponteiro_endereco;

    // O operador '&' pega o ENDEREÇO da variável 'luas_de_marte'
    // e o guarda dentro do nosso ponteiro.
    ponteiro_endereco = &luas_de_marte;

    printf("Valor original das luas: %d\n", luas_de_marte);

    // O ponteiro guarda apenas o número da "casa" (ex: 0x7ffd...)
    printf("Endereco anotado no ponteiro: %p\n", (void *)ponteiro_endereco);

    // Usar '&' diretamente na variável resulta no mesmo endereço!
    printf("Endereco real na memoria:      %p\n", (void *)&luas_de_marte);

    return 0;
}