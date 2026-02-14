// Função sem retorno

#include <stdio.h>

void mensagem(void) // Cria uma função que não devolve nada (sem parametro)
{
    printf("Ola programa!\n");
}

int main () {
    mensagem(); // não retorna nenhum argumento
    return 0;
}