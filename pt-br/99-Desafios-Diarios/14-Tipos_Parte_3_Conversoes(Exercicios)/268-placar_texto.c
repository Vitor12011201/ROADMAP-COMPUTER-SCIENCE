/* Objetivo: Praticar a conversão básica de inteiros para string usando segurança.
Instruções:
1. Crie um array de caracteres char buffer[20];.
2. Declare duas variáveis inteiras: int gols_gremio = 3; e int gols_inter = 1;.
3. Use o snprintf para formatar e salvar dentro do buffer o texto exatamente assim: "Placar: 3 x 1".
4. Imprima o buffer na tela usando o printf normal com %s para verificar se a conversão deu certo.*/

#include <stdio.h>

int main()
{
    char buffer[20];
    int gols_gremio = 3;
    int gols_inter = 1;

    snprintf(buffer, 20 , "Placar: %d x %d", gols_gremio, gols_inter);

    printf("%s\n", buffer);

    printf("%s\n", buffer);

    return 0;

}