/* Objetivo: Provar a regra da especificação de que o C promove automaticamente o tipo de uma constante sem sufixo para caber o valor.
Instruções:
1. Use o operador sizeof diretamente em constantes literais dentro do printf, sem criar variáveis.
2. Imprima o sizeof(2000) (um número que cabe em um int comum).
3. Imprima o sizeof(3000000000) (3 bilhões — um número que não cabe em um int padrão de 32 bits, que só vai até 2.1 bilhões).
4. Imprima o sizeof(3000000000U) (com o sufixo U).
- O que observar: Veja como o tamanho em bytes muda de um número para o outro na tela, provando que o compilador aplicou a tabela do livro e promoveu o número maior para long ou long long automaticamente.*/

#include <stdio.h>

int main() {

    printf("sizeof(2000)        = %zu\n", sizeof(2000));
    printf("sizeof(3000000000)  = %zu\n", sizeof(3000000000));
    printf("sizeof(3000000000U) = %zu\n", sizeof(3000000000U));

    return 0;
}