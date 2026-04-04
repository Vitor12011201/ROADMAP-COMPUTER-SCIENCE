/*Objetivo: Diferenciar claramente char (aspa simples) de string (aspa dupla).
1. Declare duas variáveis:
char letra = 'A';
char *texto = "A";
2. Tente imprimir o sizeof de cada uma delas.
Pergunta: Por que o tamanho do texto é maior que o da letra, se ambos parecem ser apenas a letra 'A'?
Resposta: Quando se usa aspas simples e compilador entende que é um Char, (apenas 1 caractere da tabela ASCII) e reserva 1 Byte para a variavel na memoria,
E char *texto: É um ponteiro (um endereço de memória). Em sistemas de 64 bits, qualquer endereço de memória ocupa 8 Bytes, não importa se ele aponta para a letra "A" ou para um livro inteiro.*/

#include <stdio.h>

int main()
{
    char letra = 'A';
    char* texto = "A";

    int tamanho_char = sizeof(letra);
    int tamanho_string = sizeof(texto);

    printf("O Tamanho da Variavel letra(Char) : [%d] Bytes\n", tamanho_char);
    printf("O Tamanho da Variavel texto(String) : [%d] Bytes\n", tamanho_string);
}
