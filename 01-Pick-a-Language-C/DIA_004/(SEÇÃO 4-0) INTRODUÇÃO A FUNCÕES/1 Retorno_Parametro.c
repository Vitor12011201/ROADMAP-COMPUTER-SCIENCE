/* O que é uma função?
É um bloco de código que faz alguma coisa.
Você chama a função → ela executa → e devolve (ou não) um resultado.
📦 Pense: é como pedir uma pizza.
Você manda o pedido → a pizzaria faz → e te entrega algo
*/

//Função com retorno e com parâmetro

#include <stdio.h>

int somar (int x, int y) { // Parâmetro = a variável que recebe → (x, y)
    return x + y; // Devolve a soma
}

// Chamando a Função
int main () {
    int resultado = somar (2, 3); // Argumento = o valor que voce envia (2, 3)
    printf("A soma de x + y = %d\n", resultado);
}