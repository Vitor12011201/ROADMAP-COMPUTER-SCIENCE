/* Objetivo: Combinar escopo de arquivo com ponteiros e arrays para rastrear quem modificou uma variável global.
Instruções:
1. Declare uma variável de escopo de arquivo int dado_principal = 0;.
2. Declare um array de ponteiros de escopo de arquivo: int *historico[5]; e um contador int total_modificacoes = 0;.
3. Crie uma função void modificar_dado(int *ponteiro_origem). Essa função deve:
 - Copiar o valor apontado por ponteiro_origem para dentro de dado_principal.
 - Guardar o endereço desse ponteiro_origem dentro do array historico na posição atual do contador.
 - Incrementar o contador total_modificacoes.
4. No main, crie duas variáveis locais (int v1 = 50; int v2 = 100;). Chame a função passando o endereço delas.
5. No final do main, use o array global historico para imprimir os endereços de memória que alteraram o dado principal. */

#include <stdio.h>

int dado_principal = 0;

int *historico[5];
int total_modificacoes = 0;

void modificar_dado(int *ponteiro_origem)
{
 dado_principal = *ponteiro_origem;

 historico[total_modificacoes] = ponteiro_origem;

 total_modificacoes++;
}

int main()
{
 int v1 = 50;
 int v2 = 100;

 modificar_dado(&v1);
 modificar_dado(&v2);

 printf("Valor final de dado_principal: %d\n", dado_principal);

 printf("\nHistorico de modificacoes:\n");

 for (int i = 0; i < total_modificacoes; i++)
 {
  printf("Endereco %d: %p\n", i + 1, (void *)historico[i]);
 }

 return 0;
}