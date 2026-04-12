/* Objetivo: Praticar a precisão de dados e cálculos dentro da struct usando a nova sintaxe.
1. Crie uma struct Jogo com os campos: int tentados, int convertidos e float aproveitamento.
2. No main, peça ao usuário para digitar os arremessos tentados e os convertidos.
3. Declare a struct meu_jogo inicializando os campos tentados e convertidos com o que o usuário digitou (use a sintaxe .campo = valor).
4. Logo abaixo, calcule o aproveitamento: (convertidos / (float)tentados) * 100.
5. Guarde o resultado dentro de meu_jogo.aproveitamento.
6. Se o aproveitamento for maior que 50.0, imprima "Mão quente!", caso contrário, "Precisa treinar mais!".*/

#include<stdio.h>

struct jogo
{
    int tentados;
    int convertidos;
    float aproveitamento;
};

int main()
{
    struct jogo arremessos = {.tentados = 0, .convertidos = 0, .aproveitamento = 0};

    printf("Digite quantos arremessos foram dados: \n");
    scanf("%d", &arremessos.tentados);
    printf("\n");
    printf("Digite quantos desses arremessos foram convertidos em pontos: \n");
    scanf("%d", &arremessos.convertidos);
    if (arremessos.tentados < arremessos.convertidos)
    {
        printf("O numero de arremessos tentados nao tem como ser menor que o numero de arremessos convertidos\n");
        printf("Digite um numero menor que dos arremessos tentados\n");
        scanf("%d", &arremessos.convertidos);
    }
    printf("\n");
    printf("O numero total de arremessos foi de [%d Arremessos] \n", arremessos.tentados);
    printf("\n");
    printf("O numero de arremessos convertidos em ponto foi de [%d Cestas]\n", arremessos.convertidos);
    printf("\n");

    arremessos.aproveitamento = (arremessos.convertidos / (float)arremessos.tentados) * 100;

    printf("A taxa de acerto e de: [%.2f por cento]\n", arremessos.aproveitamento);

    if (arremessos.aproveitamento > 50)
    {
        printf("Esse jogador e mao quente\n");
    }
    else
    {
        printf("Esse jogador precisa treinar mais\n");
    }

    return 0;
}
