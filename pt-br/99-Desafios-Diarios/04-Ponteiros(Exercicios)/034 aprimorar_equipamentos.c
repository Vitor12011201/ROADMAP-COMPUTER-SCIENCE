/*Crie um programa que gerencie o arsenal de um herói.
No main, declare três variáveis inteiras: int espada = 10;, int escudo = 10; e int bota = 10;.
Crie uma função chamada melhorar_item que recebe um ponteiro int *p_item. Lá dentro, some +5 ao valor apontado.
Crie um ponteiro int *selecionado no main.
Peça para o usuário escolher qual item ele quer melhorar (1-Espada, 2-Escudo, 3-Bota).
Use um switch para fazer o ponteiro selecionado apontar para o endereço da variável escolhida (ex: selecionado = &espada;).
Depois do switch, chame a função melhorar_item passando o ponteiro selecionado.
Imprima os valores de todos os itens para ver que apenas o escolhido foi alterado.*/

#include <stdio.h>

void melhorar_equipamento(int* ptr)
{
    *ptr = *ptr + 5;
}

int main()
{
    int resposta_usuario = 1;
    int espada = 10;
    int escudo = 10;
    int bota = 10;

    while (resposta_usuario != 0)
    {
        printf("Qual Equipamento voce gosteria de Aprimorar? :\n");
        printf("1 - Espada\n");
        printf("2 - Escudo\n");
        printf("3 - Botas\n");
        printf("4 - Ver qual o poder atual de todos os esquipamentos\n");
        printf("0 - Sair do programa\n");
        scanf("%d", &resposta_usuario);

        switch (resposta_usuario)
        {
        case 1:
            melhorar_equipamento(&espada);
            printf("Voce aprimorou a Espada, agora sua espada tem o total de %d de poder\n", espada);
            break;

        case 2:
            melhorar_equipamento(&escudo);
            printf("Voce melhorou o Escudo, agora seu escudo tem o total de %d de poder\n", escudo);
            break;

        case 3:
            melhorar_equipamento(&bota);
            printf("Voce melhorou a Bota, agora seu escudo tem o total de %d de poder\n", bota);
            break;

        case 4:
            printf("O poder total da sua Espada e : %d\n", espada);
            printf("O poder total do seu Escudo e : %d\n", escudo);
            printf("O poder total das suas botas e : %d\n", bota);
        }
    }
}
