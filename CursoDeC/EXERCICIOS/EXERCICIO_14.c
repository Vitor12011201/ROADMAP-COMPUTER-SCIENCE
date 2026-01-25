#include <stdio.h>


/* Cadastro de nomes
Crie um programa em C que:
Peça ao usuário 5 nomes (cada nome pode ter até 50 caracteres)
Armazene os nomes em um array de strings
Crie funções para:
Mostrar todos os nomes cadastrados
Contar quantos nomes começam com a letra A (maiúscula ou minúscula) */

void ler_Nomes(char nomes[][50],int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("[%i] - Digite um nome \n", i + 1);
        scanf("%s" , nomes[i]);
    }
}
void mostrar_Nomes(char nomes[][50], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%s foi um nome digitado \n"  , nomes[i]);
    }
}
int contar_Com_A(char nomes[][50], int tamanho) {
    int acumulador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (nomes[i][0] == 'A' || nomes[i][0] == 'a') {
            acumulador++;
            printf("(%s) e um nome que começa com A \n" , nomes[i]);
        }
    }
    printf("Existem [%d] numeros que começam com a letra A \n", acumulador);
}


int main() {
    char nome[5][50];
    int tamanho = 5;
    char busca[50];
    ler_Nomes(nome,tamanho);
    mostrar_Nomes(nome,tamanho);
    contar_Com_A(nome, tamanho);
}