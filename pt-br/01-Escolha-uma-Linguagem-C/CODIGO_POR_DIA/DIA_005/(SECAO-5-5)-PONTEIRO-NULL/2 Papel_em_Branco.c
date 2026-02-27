// Este código mostra o ciclo de vida de um ponteiro: ele nasce vazio, a gente testa se ele está vazio,
// e depois damos um endereço a ele.

#include <stdio.h>

int main(void) {
    // 1. Criamos o ponteiro e dizemos: "Voce nao aponta para NADA agora".
    int *papel_endereco = NULL;

    // 2. O teste de seguranca (sempre faca isso!)
    if (papel_endereco == NULL) {
        printf("O papel esta em branco. Nao va a lugar nenhum!\n");
    }

    // 3. Agora, vamos anotar um endereco de verdade no papel
    int casa_numero = 100;
    papel_endereco = &casa_numero;

    // 4. Testamos de novo. Agora ele NAO e mais NULL.
    if (papel_endereco != NULL) {
        printf("Agora o papel tem um endereco! O valor na casa e: %d\n", *papel_endereco);
    }

    return 0;
}