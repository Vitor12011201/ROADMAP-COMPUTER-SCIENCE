/* Objetivo: Entender o comportamento de Overflow (Estouro) quando um número unsigned passa do seu limite mínimo ou máximo.
Instruções:
Declare uma variável unsigned int zero = 0;.
Subtraia 1 dessa variável (zero--; ou zero = zero - 1;).
Imprima o resultado usando %u.
O Desafio: Explique em um comentário o que aconteceu. Por que tentar tirar 1 de zero em uma variável unsigned faz ela pular direto para o maior número possível do sistema? (Pense no odômetro de um carro que, ao andar de ré no 00000km, pula para 99999km).*/
// Resposta: Como unsigned int não permite valores negativos, ao subtrair 1 de 0 ocorre um underflow (estouro para baixo). O valor "dá a volta" e passa para o maior valor representável pelo tipo unsigned int. Em um sistema de 32 bits, esse valor normalmente é 4294967295 (2^32 - 1).

#include <stdio.h>

int main()
{
    unsigned int zero = 0;

    zero--;

    printf("Variavel (zero): %u\n", zero);

    return 0;
}