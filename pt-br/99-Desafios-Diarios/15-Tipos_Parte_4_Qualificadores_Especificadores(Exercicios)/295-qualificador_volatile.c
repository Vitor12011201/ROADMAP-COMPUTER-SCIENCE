/* Objetivo: Entender por que a palavra-chave volatile impede o compilador de fazer otimizações perigosas (como deletar loops "inúteis").
Instruções:
1. Crie uma variável representando um registrador de hardware: volatile int registrador_status = 0;.
2. Crie um loop while (registrador_status == 0) simulando a espera por uma atualização de hardware.
3. Para testar o código no computador, adicione um contador simples dentro do loop que força a mudança da variável depois de 5 iterações: contador++; if (contador == 5) registrador_status = 1;.
4. Em um comentário no código: Explique por que, sem a palavra volatile, um compilador otimizador (-O2 ou -O3) poderia assumir que registrador_status nunca muda dentro do loop e transformar o código em um loop infinito while (true).*/

#include <stdio.h>

volatile int registrador_status = 0;

int main(void)
{
    int contador = 0;

    printf("Aguardando atualizacao do registrador...\n");

    while (registrador_status == 0)
    {
        contador++;

        printf("Iteracao: %d\n", contador);

        if (contador == 5)
        {
            registrador_status = 1;
        }
    }

    printf("Registrador atualizado. Status: %d\n", registrador_status);

    /*
     * A palavra-chave volatile informa ao compilador que o valor de
     * registrador_status pode mudar de maneira externa ao fluxo normal
     * do programa, por exemplo:
     *
     * - por um dispositivo de hardware;
     * - por uma interrupcao;
     * - por um registrador mapeado em memoria.
     *
     * Por isso, o compilador deve ler registrador_status novamente da
     * memoria a cada verificacao do while.
     *
     * Sem volatile, caso não existisse nenhuma alteracao visivel dentro
     * deste codigo, um compilador com otimizacoes como -O2 ou -O3 poderia
     * assumir que registrador_status nunca muda durante o loop.
     *
     * Assim, ele poderia tratar:
     * while (registrador_status == 0)
     *
     * como:
     * while (1)
     * criando um loop infinito.
     */

    return 0;
}