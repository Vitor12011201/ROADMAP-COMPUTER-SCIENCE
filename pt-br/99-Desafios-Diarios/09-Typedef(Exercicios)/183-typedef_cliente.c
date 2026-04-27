/*Objetivo: Usar typedef para organizar tipos de dados diferentes dentro de uma struct.
1. Crie um typedef unsigned long long ID_Cliente; (para IDs bem grandes).
2. Crie uma struct anônima com typedef chamada Cliente contendo:
ID_Cliente id;
char nome[50];
3. Crie uma função void exibirCliente(Cliente c) que use o nome do tipo customizado para imprimir os dados.
4. No main, cadastre um cliente com um ID longo (ex: 20241000500) e exiba-o.*/

#include <stdio.h>
#include <string.h>

typedef unsigned long long ID_Cliente;

typedef struct {
    ID_Cliente id;
    char nome[50];
} Cliente;

void exibirCliente(Cliente c) {
    printf("ID: %llu\n", c.id);
    printf("Nome: %s\n", c.nome);
}

int main() {
    Cliente c1;

    c1.id = 20241000500ULL;
    strcpy(c1.nome, "Vitor Santana");

    exibirCliente(c1);

    return 0;
}