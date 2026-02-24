#include <stdio.h>

// Esta funcao recebe os ENDERECOS (ponteiros)
void trocar(int *p1, int *p2) {
    int temp; // Variavel temporaria para nao perder o valor

    temp = *p1; // Salva o valor que esta no endereco p1
    *p1 = *p2;  // Coloca o valor de p2 no endereco de p1
    *p2 = temp; // Coloca o valor salvo no endereco de p2
}

int main(void) {
    int x = 5;
    int y = 10;

    printf("Antes: x = %d, y = %d\n", x, y);

    // Passamos os ENDERECOS para a funcao
    trocar(&x, &y);

    // A magica aconteceu! Os valores mudaram de lugar na main
    printf("Depois: x = %d, y = %d\n", x, y);

    return 0;
}