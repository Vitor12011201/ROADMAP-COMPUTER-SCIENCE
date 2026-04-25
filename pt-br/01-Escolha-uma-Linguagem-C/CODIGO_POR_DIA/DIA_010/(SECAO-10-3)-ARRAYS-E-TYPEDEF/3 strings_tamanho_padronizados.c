#include <stdio.h>

/* OBJETIVO: Definir um padrão de tamanho para strings de texto. 
   Muito útil para garantir que campos como 'Nome' ou 'Senha' 
   tenham sempre o mesmo limite de caracteres no sistema todo.*/

typedef char NomeUsuario[50];

int main() {
    // 'user' agora tem espaço para 49 letras + o '\0'
    NomeUsuario user = "Start_Dev";

    printf("Usuário logado: %s\n", user);
    printf("Espaço total alocado: %zu bytes\n", sizeof(NomeUsuario));

    return 0;
}