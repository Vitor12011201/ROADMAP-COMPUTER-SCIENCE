#include <stdio.h>

/* OBJETIVO: Diferenciar quando usar o ponto (.) e quando usar a seta (->).
 * Se a variavel eh a propria struct, usamos ponto. Se eh um ponteiro, usamos seta.
 */

struct Carro {
    char *nome;
    int velocidade;
};

int main() {
    struct Carro fusca = {.nome = "Fusca", .velocidade = 120};
    struct Carro *ponteiro = &fusca;

    // Usando PONTO porque 'fusca' e a variavel da struct
    printf("Via Ponto: %s\n", fusca.nome);

    // Usando SETA porque 'ponteiro' guarda o endereco da struct
    printf("Via Seta:  %s\n", ponteiro->nome);

    return 0;
}