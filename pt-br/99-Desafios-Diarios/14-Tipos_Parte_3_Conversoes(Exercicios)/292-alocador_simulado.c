/* Objetivo: Simular o comportamento de funções como o malloc (que retorna um void*) e praticar a conversão segura para preencher uma estrutura de dados.
Instruções:
1. Defina uma struct Jogador contendo int id; e float pontuacao;.
2. Crie um array global ou local de bytes brutos para simular a memória do sistema: unsigned char memoria_bruta[sizeof(struct Jogador)];.
3. Crie um ponteiro genérico que aponta para essa memória: void *ponteiro_alocado = memoria_bruta;.
4. Sem usar atribuição intermediária, use o cast inline e o operador de seta ou ponto para acessar os membros da struct diretamente através de ponteiro_alocado. Exemplo de sintaxe: ((struct Jogador *)ponteiro_alocado)->id = 7;. Atribua uma pontuação também.
5. Imprima os valores de id e pontuacao acessando-os da mesma forma (com o cast inline). */

#include <stdio.h>

struct Jogador
{
    int id;
    float pontuacao;
};

int main(void)
{
    _Alignas(struct Jogador)
    unsigned char memoria_bruta[sizeof(struct Jogador)];

    void *ponteiro_alocado = memoria_bruta;

    ((struct Jogador *)ponteiro_alocado)->id = 7;
    ((struct Jogador *)ponteiro_alocado)->pontuacao = 95.5f;

    printf("ID: %d\n",
           ((struct Jogador *)ponteiro_alocado)->id);

    printf("Pontuacao: %.2f\n",
           ((struct Jogador *)ponteiro_alocado)->pontuacao);

    return 0;
}