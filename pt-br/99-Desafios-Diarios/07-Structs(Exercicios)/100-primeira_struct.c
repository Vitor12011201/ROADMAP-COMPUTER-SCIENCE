/* Objetivo: Aprender a definir a estrutura e como acessar as "gavetas" dentro dela usando o ponto (.).
1. Defina a Struct: Fora do main, crie uma struct Jogador que tenha:
- Um inteiro pontuacao.
- Um float nivel_experiencia.
2. No main: Declare uma variável chamada p1 do tipo struct Jogador.
3. Atribua o valor 100 para a pontuação e 1.5 para o nível.
4. Imprima esses valores na tela usando p1.pontuacao e p1.nivel_experiencia.*/

#include <stdio.h>

struct jogador
{
    int pontuacao;
    float nivel_experiencia;
};

int main()
{
    struct jogador p1 = {100, 1.5};
    printf("A pontuacao do jogador e de: [%d]\n", p1.pontuacao);
    printf("O nivel de experiencia do jogador e de: [%.2f]\n", p1.nivel_experiencia);
}
