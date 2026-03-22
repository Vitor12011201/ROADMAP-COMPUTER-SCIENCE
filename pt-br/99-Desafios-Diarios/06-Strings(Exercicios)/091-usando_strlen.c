/*Objetivo: Praticar a inclusão da biblioteca e o uso da função oficial.
Não esqueça do #include <string.h>
1. Peça para o usuário digitar o nome dele.
2. Use strlen() para dizer: "Olá [nome], seu nome tem [X] letras".
3. Use o formatador %zu para imprimir o resultado da strlen().*/

#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50];
    printf("Digite o seu nome: \n");
    scanf("%s", nome);
    printf("Ola [%s], seja bem-vindo, seu nome tem [%zu] letras\n", nome, strlen(nome));

    return 0;
}
