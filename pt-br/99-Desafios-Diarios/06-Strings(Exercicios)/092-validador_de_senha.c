/* Objetivo: Usar o comprimento da string para uma lógica de controle.
1. Crie uma string char senha[] = "12345";.
2. Crie uma função que verifica se a senha é "segura".
3. A regra é: se a strlen(senha) for menor que 6, imprima "Senha muito curta!". Se for 6 ou mais, imprima "Senha aceitável".*/

#include <stdio.h>
#include <string.h>

void senha_segura(char *a)
{
    if (strlen(a) >= 6)
    {
        printf("Senha aceitavel (Segura)\n");
    }
    else
    {
        printf("Senha muito curta (insegura)\n");
    }
}

int main()
{
    char senha[] = "12345";
    senha_segura(senha);

    return 0;
}
