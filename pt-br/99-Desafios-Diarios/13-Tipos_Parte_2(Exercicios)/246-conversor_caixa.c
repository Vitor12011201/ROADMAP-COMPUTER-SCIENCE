/* Objetivo: Usar a distância numérica da tabela ASCII para transformar letras maiúsculas em minúsculas sem usar funções prontas.
Instruções:
1. Na tabela ASCII, a letra 'A' vale 65 e a letra 'a' vale 97. A distância entre qualquer letra maiúscula e sua versão minúscula é sempre 32.
2. Crie uma função char para_minuscula(char maiuscula).
3. Dentro dela, faça a matemática necessária para transformar a letra em minúscula e retorne o resultado.
4. No main, peça para o usuário digitar uma letra maiúscula, passe para a função e imprima o resultado com %c. */

#include <stdio.h>

char para_minuscula(char maiuscula)
{

    maiuscula = maiuscula + 32;

    return maiuscula;

}

int main()
{

    char letra;

    printf("Digite uma letra Maiuscula: \n");
    scanf("%c", &letra);

    letra = para_minuscula(letra);

    printf("Minuscula: %c", letra);

    return 0;

}