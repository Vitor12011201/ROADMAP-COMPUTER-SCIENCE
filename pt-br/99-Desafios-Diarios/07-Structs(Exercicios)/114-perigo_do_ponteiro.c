/* O Programa vai dar erro ou apresentar comportamento indefinido
Objetivo: Entender na prática o que se quer dizer com "não é uma cópia profunda".
Crie uma struct Pessoa com char *nome (ponteiro) e int idade.
No main, crie p1 como {.nome = "Alice", .idade = 25}.
Crie p2 e faça p2 = p1;.
Agora, preste atenção: mude a idade de p2 para 30.
O Desafio: Tente mudar o nome de p2 usando p2.nome[0] = 'E'; (para virar Elice).
Imprima o nome de p1.*/

#include <stdio.h>

struct pessoa
{
    char *nome;
    int idade;
};

int main()
{
    struct pessoa p_1 = {.nome = "Alice", .idade = 25};
    struct pessoa p_2;
    p_2 = p_1;
    p_2.idade = 30;
    p_2.nome[0] = 'E';
    printf("p_1.nome: %s, p_1.idade: %d\n", p_1.nome, p_1.idade);
    printf("p_2.nome: %s, p_2.idade: %d\n", p_2.nome, p_2.idade);

    return 0;
}
