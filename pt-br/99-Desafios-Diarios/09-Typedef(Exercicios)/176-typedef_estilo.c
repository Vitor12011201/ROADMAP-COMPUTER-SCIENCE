/*Objetivo: Praticar a padronização de nomes seguindo uma regra específica (PascalCase para tipos).
1. Crie um typedef para int chamado InteiroPositivo.
2. Crie uma struct anônima com typedef chamada DadosUsuario (PascalCase) com um id e uma idade.
3. No main, declare as variáveis usando esses nomes e imprima os valores.
Reflexão: Note como o código parece "falar" outra língua quando você padroniza os nomes dos tipos.*/

#include <stdio.h>

typedef int InteiroPositivo;

typedef struct
{
    InteiroPositivo id;
    InteiroPositivo idade;
} DadosUsuario;

int main()
{

    DadosUsuario d_1 = {.id = 54321 , .idade = 25};

    printf("ID : %d\nIdade: %d\n", d_1.id , d_1.idade);

    return 0;

}