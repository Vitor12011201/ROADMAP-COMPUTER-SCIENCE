/* Objetivo: Entender o que acontece com campos que você não inicializa.
1. crie uma struct carro com os atributos(nome, preco, velocidade).
2. Inicialize um carro chamado meu_carro definindo apenas o .nome = "Fusca".
3. Imprima o nome, o preço e a velocidade.*/

#include <stdio.h>

struct carro
{
    char *nome;
    float preco;
    int velocidade;
};


int main()
{
    struct carro meu_carro = {.nome = "Fusca"};
    printf("O nome do meu carro e: [%s]\n", meu_carro.nome);
    printf("O preco do carro e: [%.2f]\n", meu_carro.preco);
    // No print vai ser mostrado 0.00, pois o atributo não foi iniciado
    printf("A velocidado do caro e: [%d]\n", meu_carro.velocidade);
    // // No print vai ser mostrado 0, pois o atributo não foi iniciado

    return 0;
}
