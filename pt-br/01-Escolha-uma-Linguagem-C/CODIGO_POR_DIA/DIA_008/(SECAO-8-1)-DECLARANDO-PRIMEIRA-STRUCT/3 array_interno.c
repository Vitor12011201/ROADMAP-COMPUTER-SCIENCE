#include <stdio.h>
#include <string.h>

struct Usuario {
    char nome[20]; // Array fixo: permite alteracao posterior com strcpy
    int id;
};

int main() {
    struct Usuario user1;

    user1.id = 101;
    // Como 'nome' eh um array, nao podemos fazer user1.nome = "Bebeto"
    // Temos que copiar os bytes para dentro da struct
    strcpy(user1.nome, "Bebeto");

    printf("Usuario: %s | ID: %d\n", user1.nome, user1.id);

    return 0;
}