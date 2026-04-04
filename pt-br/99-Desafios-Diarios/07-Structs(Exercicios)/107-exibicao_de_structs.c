/* Objetivo: Passar uma struct por valor (cópia) apenas para leitura.
1. Crie uma struct Pet com char *nome e int idade.
2. Crie uma função void exibir_pet(struct Pet p) que apenas imprime os dados.
3. No main, inicialize um pet e chame a função passando ele diretamente.*/

#include <stdio.h>

struct pet
{
    char* nome;
    int idade;
};

void exibir_pet(struct pet p)
{
    printf("O nome do Pet e: [%s]\n", p.nome);
    printf("A idade do Pet e: [%d anos]\n", p.idade);
}

int main()
{
    struct pet cachorro = {.nome = "Amora", .idade = 5};

    exibir_pet(cachorro);

    return 0;
}
