/* Objetivo: Praticar a declaração correta de constantes literais forçando seus tipos com os sufixos padrão.
Instruções:
1. Declare uma variável unsigned int chamada populacao e atribua o valor 3000 usando o sufixo apropriado.
2. Declare uma variável unsigned long long chamada distancia_estrelas e atribua o valor 999999999999 usando o sufixo combinado apropriado.
3. Imprima ambas na tela usando os especificadores de formato corretos (%u e %llu).
Reflexão: O que acontece se você inverter a ordem do sufixo (ex: usar LLU em vez de ULL)? Teste no seu compilador. */

#include <stdio.h>

int main() {

    unsigned int populacao = 3000U;


    unsigned long long distancia_estrelas = 999999999999ULL;


    printf("Populacao: %u\n", populacao);
    printf("Distancia das estrelas: %llu\n", distancia_estrelas);

    return 0;
}