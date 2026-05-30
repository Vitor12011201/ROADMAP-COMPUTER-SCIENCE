#include <stdio.h>

/* OBJETIVO: Mostrar que uma variável local (dentro de uma função) com o
   mesmo nome de uma variável global a oculta dentro daquela função.
   A global não é alterada, a menos que seja explicitamente acessada
   (o que não é possível diretamente quando ocultada). */

int valor = 100;   // Variável global

void funcao_com_local() {
    int valor = 50;   // Esta variável LOCAL oculta a global dentro da função
    printf("Dentro da função: valor = %d (local, não a global)\n", valor);

    // Para acessar a global aqui, não é possível pois foi ocultada.
    // Em C, não há como acessar a global se uma local de mesmo nome existe.
}

void funcao_sem_local() {
    // Esta função não tem variável 'valor' local, então usa a global
    printf("Dentro da função sem local: valor = %d (global)\n", valor);
}

int main() {
    printf("No main (antes): valor global = %d\n", valor);
    funcao_com_local();
    funcao_sem_local();
    printf("No main (depois): valor global ainda = %d (não foi alterado)\n", valor);
    return 0;
}