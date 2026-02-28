#include <stdio.h>

int main(void) {
    // 1. Declaração e Inicialização
    // Criamos um array de inteiros com 5 posições
    int notas[5] = {85, 92, 78, 90, 88};

    // 2. Acessando valores (Lembre-se: começa no ZERO!)
    printf("A primeira nota e: %d\n", notas[0]); // Saída: 85
    printf("A terceira nota e: %d\n", notas[2]);  // Saída: 78

    // 3. Modificando um valor
    notas[4] = 95; // Muda o último elemento de 88 para 95
    printf("A nota final atualizada e: %d\n", notas[4]);

    // 4. Um erro comum (O que NÃO fazer)
    // printf("%d", notas[10]); // PERIGO: Acessando memória fora do array!

    return 0;
}