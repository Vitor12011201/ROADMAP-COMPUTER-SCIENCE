#include <stdio.h>

// Imagine uma matriz onde cada linha e um produto e cada coluna e um deposito
void adicionar_estoque(int estoque[][2], int produto_id, int quantidade) {
    // Altera diretamente o valor na memoria original
    estoque[produto_id][0] += quantidade;
    printf("Estoque do produto %d atualizado!\n", produto_id);
}

int main() {
    // 3 produtos, 2 depositos cada
    int armazem[3][2] = {
        {10, 5}, // Produto 0
        {20, 0}, // Produto 1
        {0, 30}  // Produto 2
    };

    // Adiciona 5 unidades ao primeiro deposito do Produto 1
    adicionar_estoque(armazem, 1, 5);

    // Agora o valor original e 25 (20 + 5)
    printf("Novo estoque Produto 1, Deposito 0: %d\n", armazem[1][0]);

    return 0;
}