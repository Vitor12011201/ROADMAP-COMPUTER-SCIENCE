#include <stdio.h>

/* OBJETIVO: Resolver o problema de perda de escopo. Se o algoritmo precisar salvar
   o índice exato onde um loop foi interrompido (ex: varredura de buffer ou busca de id),
   a variável de controle DEVE ser declarada no escopo da função, e não dentro do 'for'. */

int main() {
    int indice_alvo; // Declarada no escopo da função main()
    int dados[] = {10, 20, 30, 999, 50}; // 999 é o nosso sentinela de erro

    // O loop usa a variável externa. Não usamos 'int' dentro do for aqui.
    for (indice_alvo = 0; indice_alvo < 5; indice_alvo++) {
        if (dados[indice_alvo] == 999) {
            printf("Sinalizador de interrupção encontrado!\n");
            break; // Sai do loop imediatamente
        }
    }

    // Como indice_alvo foi declarado fora do for, ele ainda está vivo na Stack.
    // Isso permite analisar exatamente onde o loop parou.
    if (indice_alvo < 5) {
        printf("O processamento parou com sucesso no índice: %d\n", indice_alvo);
    } else {
        printf("O loop percorreu todo o array sem interrupções.\n");
    }

    return 0;
}