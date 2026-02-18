#include <stdio.h>

// --- O JEITO CERTO (C Moderno) ---
// Usar 'void' no protótipo avisa ao compilador:
// "Se alguem tentar passar um numero aqui, de um ERRO".
void emitir_alarme(void);

// --- O JEITO PERIGOSO (Evite!) ---
// Deixar vazio diz ao compilador:
// "Nao tenho informacoes sobre os parametros. Aceite qualquer coisa".
void aviso_antigo();

int main(void) {

    emitir_alarme(); // Funciona perfeitamente.

    // Se voce fizesse: emitir_alarme(10);
    // O compilador te daria um ERRO (o que é bom!).

    aviso_antigo(500, "texto", 3.14); // O compilador PODE deixar passar!
    // Isso e um perigo, pois a funcao nao sabe lidar com esses dados extras.

    return 0;
}

// Na definicao, tambem seja explicito usando void
void emitir_alarme(void) {
    printf("!!! ALERTA DE SISTEMA !!!\n");
}

void aviso_antigo() {
    printf("Aviso de seguranca emitido.\n");
}