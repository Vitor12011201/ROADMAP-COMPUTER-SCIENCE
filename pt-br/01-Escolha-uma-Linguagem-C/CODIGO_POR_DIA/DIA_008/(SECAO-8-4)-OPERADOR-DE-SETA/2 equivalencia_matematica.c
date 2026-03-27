#include <stdio.h>

/* OBJETIVO: Provar que 'ponteiro->campo' eh exatamente o mesmo que '(*ponteiro).campo'.
 * O operador seta foi criado apenas para deixar o codigo mais limpo e facil de ler.
 */

struct Carro {
    char *nome;
    float preco;
};

int main() {
    struct Carro saturn = {.nome = "Saturn SL/2", .preco = 0.0};
    struct Carro *c = &saturn;

    // Forma "feia" e manual (desreferencia + ponto)
    (*c).preco = 500.00;

    // Forma "bonita" e profissional (seta)
    c->preco = 799.99;

    printf("Preco Final: %.2f\n", saturn.preco);

    return 0;
}