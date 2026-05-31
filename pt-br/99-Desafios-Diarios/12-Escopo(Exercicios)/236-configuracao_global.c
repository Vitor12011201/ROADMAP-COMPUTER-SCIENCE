/* Objetivo: Usar uma variável de escopo de arquivo como uma "flag" (bandeira) de configuração que altera o comportamento de outras funções.
Instruções:
1. No topo do arquivo, declare uma variável inteira chamada int MODO_DEPURACAO = 0; (ela servirá para ativar ou desativar mensagens de aviso).
2. Crie uma função void executar_calculo() que faz uma conta simples (como 5 * 5) e, se MODO_DEPURACAO for igual a 1, imprime: "[AVISO] Executando calculo estruturado.".
3. No main, chame executar_calculo() com a flag desligada (0). Depois, mude MODO_DEPURACAO = 1; e chame a função novamente para ver a mensagem aparecer. */

#include <stdio.h>

int MODO_DEPURACAO = 0;

void exercutar_calculo()
{

    if (MODO_DEPURACAO == 1)
    {
        printf("[AVISO] Executando calculo estruturado.\n");
    }

    int resultado = 5 * 5;

    printf("O resultado de 5 x 5 e: %d\n", resultado);

}

int main()
{
    exercutar_calculo();

    MODO_DEPURACAO = 1;

    printf("\n");

    exercutar_calculo();

    return 0;
}