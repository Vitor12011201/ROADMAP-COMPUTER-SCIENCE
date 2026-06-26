#include <stdio.h>

/* OBJETIVO: Resolver o bug classico da divisao inteira usando Typecasting explicito.
   Garantir que a operacao ocorra em ponto flutuante ANTES que o resultado
   seja truncado pelo comportamento padrao de inteiros. */

int main() {
    int pacotes_enviados = 5;
    int segundos = 2;

    // BUG OCULTO: int dividido por int sempre resulta em int! 5 / 2 vira 2.
    float taxa_errada = pacotes_enviados / segundos;

    // SOLUÇÃO: Usamos o operador de cast '(float)' em um dos termos.
    // Isso promove temporariamente a variavel para float, forcando uma divisao real (5.0 / 2).
    float taxa_correta = (float)pacotes_enviados / segundos;

    printf("--- Simulador de Taxa de Transmissao ---\n");
    printf("Modo Errado (Sem Cast):  %.2f pacotes/seg\n", taxa_errada);
    printf("Modo Correto (Com Cast): %.2f pacotes/seg\n", taxa_correta);

    return 0;
}