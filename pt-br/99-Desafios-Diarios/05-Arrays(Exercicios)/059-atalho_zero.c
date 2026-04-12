/*
1. Declare um array de inteiros chamado dados[] (deixe o C calcular o tamanho) e inicialize-o com os valores {10, 20, 30}.
2. Declare um segundo array chamado vazio[10] e inicialize-o usando o atalho para que todos os elementos sejam zero.
3. Imprima o tamanho do primeiro array (usando o truque do sizeof que aprendemos na seção anterior) e imprima o último elemento do segundo array para confirmar que é zero.*/

#include <stdio.h>

int main()
{
    int dados[] = {10, 20, 30};
    int vazio[10] = {0};
    int tamanho = sizeof(dados) / sizeof(int);
    printf("O tamanho do Array Dados e de [%d] Inteiros\n", tamanho);
    printf("Todas as posicoes do Array vazio estao zerados. O valor que esta em vazio[9] e de [%d]\n", vazio[9]);
}
