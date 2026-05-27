#include <stdio.h>

/* OBJETIVO: Mostrar a ocultação dentro do bloco de um 'if'.
   A variável declarada dentro do 'if' só existe ali e oculta a global. */

int contador = 100;   // Variável global (escopo de arquivo)

int main() {
    int contador = 50;   // Local ao main, oculta a global

    printf("No main, antes do if: contador = %d\n", contador);

    if (contador > 0) {
        int contador = 999;   // Oculta a do main dentro do if
        printf("Dentro do if: contador = %d\n", contador);
    }

    printf("Depois do if: contador = %d (voltou a ser a do main)\n", contador);

    return 0;
}