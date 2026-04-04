/*Objetivo: Praticar a inicialização nomeada (Designated Initializers) e ver a ordem não importar.
1. Crie uma struct Smartphone com: char *modelo, int ram e float preco.
2. No main, inicialize uma variável s1 usando a sintaxe de ponto, mas mude a ordem: coloque o preco primeiro, depois o modelo e por fim a ram.
3. Imprima os valores para confirmar que o C organizou tudo corretamente.*/

#include <stdio.h>

struct smartphone
{
    char* modelo;
    int ram;
    float preco;
};

int main()
{
    struct smartphone s_1 = {.preco = 1999.99, .modelo = "Samsumg S3", .ram = 8};
    printf("O modelo do celular e: [%s]\n", s_1.modelo);
    printf("A quantidade de memoria Ram do celular e: [%d de Ram]\n", s_1.ram);
    printf("O Preco do celular e: [R$: %.2f]\n", s_1.preco);

    return 0;
}
