#include <stdio.h>

/* OBJETIVO: Mostrar que uma variável definida fora de qualquer função
   (escopo de arquivo) é visível e compartilhada por todas as funções
   que vêm depois dela no mesmo arquivo. */

int contador = 10;   // Escopo de arquivo (global neste arquivo)

void somar_5() {
    contador += 5;   // Modifica a variável global
    printf("Dentro de somar_5: contador = %d\n", contador);
}

void multiplicar_por_2() {
    contador *= 2;   // Modifica a mesma variável global
    printf("Dentro de multiplicar_por_2: contador = %d\n", contador);
}

int main() {
    printf("Início: contador = %d\n", contador);

    somar_5();        // contador vira 15
    multiplicar_por_2(); // contador vira 30

    printf("Final: contador = %d\n", contador);
    return 0;
}