/*Objetivo: Calcular a distância entre dois pontos específicos de uma string.
1. Crie uma string char caminho[] = "/usr/local/bin";.
2. Crie um ponteiro p_inicio apontando para o primeiro '/'.
3. Crie um ponteiro p_fim apontando para o último 'n'.
4. Subtraia: long distancia = p_fim - p_inicio;.
5. Imprima a distância e verifique se bate com a contagem manual de caracteres.
- Reflexão: O que acontece se você subtrair p_inicio - p_fim? O resultado pode ser negativo?*/

#include <stdio.h>

int main()
{

    char caminho[] = "/usr/local/bin";

    char *p_inicio = &caminho[0];

    char *p_fim = &caminho[13];

    long distancia = p_fim - p_inicio;

    long reflexao = p_inicio - p_fim;

    printf("Distancia entre o primeiro elemento do array e o ultimo elemento do array e Distancia: %ld\n", distancia);

    printf("Reflexao: %ld\n", reflexao);

    return 0;

}