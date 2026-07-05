/* Objetivo: Praticar como o C converte diferentes números inteiros e negativos para o tipo lógico Booleano.
Instruções:
Inclua <stdio.h> e <stdbool.h> (para poder usar o tipo bool).
Crie uma variável bool chamada teste_falso e atribua o valor 0.
Crie outras duas variáveis bool: teste_verdadeiro recebendo 100 e teste_negativo recebendo -5.
Imprima o valor numérico final dessas três variáveis usando %d.
Reflexão: O que aconteceu com o -5 e o 100 ao entrarem na variável booleana? */
/* Resposta: O 100 e o -5 se tornam verdadeiros, pois em C qualquer valor diferente de 0 é considerado verdadeiro. Quando esses valores são armazenados em uma variável bool, eles viram 1. */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool teste_falso = 0;
    bool teste_verdadeiro = 100;
    bool teste_negativo = -5;

    printf("teste_falso: %d\n", teste_falso);
    printf("teste_verdadeiro: %d\n", teste_verdadeiro);
    printf("teste_negativo: %d\n", teste_negativo);

    return 0;
}