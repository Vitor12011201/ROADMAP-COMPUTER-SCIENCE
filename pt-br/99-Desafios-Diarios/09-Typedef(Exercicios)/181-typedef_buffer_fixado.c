/* Objetivo: Simular um sistema que exige que todas as mensagens tenham exatamente o mesmo tamanho usando typedef.
Crie um typedef char BlocoDados[16];.
Crie uma função void limpar_bloco(BlocoDados b) que preenche todas as 16 posições do array com o caractere *.
No main, declare duas variáveis do tipo BlocoDados chamadas senha e token.
Chame a função limpar_bloco para ambas e depois imprima como strings.
O Desafio: Tente entender por que, dentro da função, você não precisa usar *b ou b[] para acessar os elementos, o nome b já age como o ponteiro para o início do bloco.*/

#include <stdio.h>

typedef char BlocoDados[16];

void limpar_bloco(BlocoDados b)
{
    for (int i = 0; i < 15; i++)
    {
        b[i] = '*';
    }

    b[15] = '\0';
}

int main()
{
    BlocoDados senha = "";
    BlocoDados token = "";

    limpar_bloco(senha);
    limpar_bloco(token);

    printf("Senha: %s\n", senha);
    printf("Token: %s\n", token);

    return 0;
}
