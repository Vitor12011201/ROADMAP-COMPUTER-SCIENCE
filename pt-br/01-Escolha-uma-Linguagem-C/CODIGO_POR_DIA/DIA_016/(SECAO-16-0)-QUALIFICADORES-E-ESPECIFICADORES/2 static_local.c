#include <stdio.h>

/* OBJETIVO: Utilizar o especificador 'static' em uma variável local.
   Fazer com que uma variável de dentro de uma função preserve seu valor na RAM
   mesmo após a função terminar de rodar, eliminando a necessidade de globais sujas. */

void registrar_frame() {
    // Sem 'static', essa variável nasceria e morreria (seria destruída na Stack) a cada chamada.
    // Com 'static', ela é alocada no segmento de dados e mantém seu valor para sempre.
    static int contador_frames = 0;

    contador_frames++;
    printf("Frame processado ID: %d\n", contador_frames);
}

int main() {
    printf("--- Ciclo de Vida com Especificador static ---\n");

    // Chamamos a função múltiplas vezes. O estado interno é preservado!
    registrar_frame();
    registrar_frame();
    registrar_frame();

    // printf("%d", contador_frames); // ERRO! A variável é invisível aqui no main. Proteção total de escopo.

    return 0;
}