#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Usar a palavra-chave 'static' para limitar o escopo de variáveis
   globais a um único arquivo (encapsulamento) e para criar variáveis estáticas
   dentro de funções que mantêm seu valor entre chamadas (mas não são globais).
   Mostrar como isso ajuda a controlar o escopo de forma rigorosa. */

// VARIÁVEL GLOBAL ESTÁTICA: visível APENAS neste arquivo
// (não pode ser acessada por outros arquivos mesmo com 'extern')
static int contador_interno = 0;

// Função que usa uma variável local estática
int contador_de_chamadas() {
    // 'static' faz com que esta variável seja inicializada apenas uma vez
    // e mantenha seu valor entre chamadas, mas seu ESCOPO é apenas a função
    static int chamadas = 0;
    chamadas++;
    return chamadas;
}

void incrementar_global() {
    contador_interno++;
    printf("contador_interno agora = %d (visível só neste arquivo)\n", contador_interno);
}

// Função que demonstra alocação dinâmica com escopo de ponteiro
int* criar_contador_local(int valor_inicial) {
    // Aloca memória no heap - o ponteiro é local, mas a memória persiste
    int *p = (int*)malloc(sizeof(int));
    if (p == NULL) {
        fprintf(stderr, "Erro de alocação\n");
        return NULL;
    }
    *p = valor_inicial;
    return p;   // retorna o ponteiro; o chamador deve liberar
}

int main() {
    printf("=== Escopo estático ===\n");

    // Chamando a função com variável estática local
    for (int i = 0; i < 5; i++) {
        printf("contador_de_chamadas() = %d\n", contador_de_chamadas());
    }

    // A variável 'chamadas' dentro da função NÃO é acessível aqui
    // printf("%d\n", chamadas);  // ERRO! chamadas não está no escopo do main.

    // Trabalhando com a variável global estática
    incrementar_global();
    incrementar_global();

    // Não podemos acessar contador_interno diretamente aqui? Podemos, pois estamos no mesmo arquivo.
    // Mas 'static' impede que outros arquivos a vejam. Aqui é permitido:
    printf("Acessando contador_interno diretamente: %d\n", contador_interno);

    // Demonstração de alocação dinâmica e escopo
    int *ptr = criar_contador_local(42);
    if (ptr != NULL) {
        printf("Valor alocado dinamicamente: %d\n", *ptr);
        free(ptr);   // importante: liberar a memória
        ptr = NULL;
    }

    // Exemplo de bloco aninhado com static – não é comum, mas mostra escopo
    {
        static int estatica_no_bloco = 0;   // só é inicializada uma vez, mas visível apenas neste bloco?
        // Na verdade, 'static' em escopo de bloco também mantém o valor,
        // mas a variável só pode ser usada dentro deste bloco.
        estatica_no_bloco++;
        printf("estatica_no_bloco = %d (mantém valor entre execuções do bloco)\n", estatica_no_bloco);
    }
    // O bloco terminou, mas a variável estática ainda existe na memória.
    // Porém não podemos acessá-la fora do bloco (o compilador proíbe).
    // Próxima vez que o bloco for executado, o valor persistirá.

    // Descomentar a linha abaixo causaria erro de compilação:
    // printf("%d\n", estatica_no_bloco);  // ERRO: fora do escopo

    return 0;
}