#include <stdio.h>

/* OBJETIVO: Corrigir um erro clássico oculto: em C, qualquer número com ponto (ex: 0.1)
   é considerado 'double' pelo compilador. Se você não usar o sufixo 'f' ao atribuir
   para um float, ocorrerá uma conversão implícita que pode gerar erros matemáticos. */

int main() {
    // O computador não consegue representar 0.1 perfeitamente em binário base-2
    float num1 = 0.1f; // Correto: O sufixo 'f' diz que a constante já nasce como float
    float num2 = 0.1;  // Perigoso: Cria um double de 64-bits e trunca para float de 32-bits

    // Teste de igualdade que frequentemente quebra lógicas de sistemas
    if (num1 == 0.1) {
        printf("Iguais! (Raro acontecer por conta do tipo padrão ser double)\n");
    } else {
        printf("[AVISO] num1 (float) NAO EH EXATAMENTE igual a 0.1 (double) para o hardware!\n");
    }

    // O jeito certo de trabalhar com precisão máxima usando constantes long double (sufixo L)
    long double pi_maximo = 3.14159265358979323846L;
    printf("Long Double de alta precisao: %.19Lf\n", pi_maximo);

    return 0;
}