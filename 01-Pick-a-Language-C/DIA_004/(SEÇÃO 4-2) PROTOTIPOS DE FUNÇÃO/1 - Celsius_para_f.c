#include <stdio.h>

// --- ESTE É O PROTÓTIPO (Function Prototype) ---
// Ele diz ao compilador: "Ei, uma funcao chamada 'celsius_para_f' existe,
// ela recebe um float e devolve um float. Pode deixar passar!".
// Note que ele termina obrigatoriamente com ponto e vírgula (;).
float celsius_para_f(float c);

int main(void) {
    float temperatura_c = 25.0;
    float resultado;

    // Chamamos a funcao aqui. O compilador aceita porque ele ja leu
    // o prototipo acima e sabe como a funcao deve ser tratada.
    resultado = celsius_para_f(temperatura_c);

    printf("%.1f Celsius e igual a %.1f Fahrenheit\n", temperatura_c, resultado);

    return 0;
}

// --- ESTA É A DEFINIÇÃO (Function Definition) ---
// Aqui e onde o trabalho acontece de verdade.
// Deve ser idêntica ao protótipo, mas agora com o corpo entre chaves { }.
float celsius_para_f(float c) {
    return (c * 9 / 5) + 32;
}