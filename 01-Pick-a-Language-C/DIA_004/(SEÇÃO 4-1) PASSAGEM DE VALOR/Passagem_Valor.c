#include <stdio.h>

// Esta funcao tenta aumentar o volume, mas ela recebe apenas uma COPIA
void aumentar_volume(int vol) {
    vol = vol + 5; // Aqui, o 'vol' local vira 15
    // O volume original la na main() nem sabe o que aconteceu aqui!
}

int main(void) {
    int volume_atual = 10;

    // Chamamos a funcao passando 'volume_atual'
    // O que acontece aqui e: vol = volume_atual (uma copia do valor 10)
    aumentar_volume(volume_atual);

    // O que sera impresso aqui? 10 ou 15?
    printf("Volume na main: %d\n", volume_atual); // Surpresa: imprime 10!

    return 0;
}