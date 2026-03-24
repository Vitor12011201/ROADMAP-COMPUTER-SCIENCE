#include <stdio.h>

// Definicao do molde (Tipo: struct Computador)
// Geralmente fica fora da main para ser usado em qualquer lugar do arquivo
struct Computador {
    char *modelo;
    float preco;
    int ram_gb;
};

int main() {
    // Declarando a variavel 'meu_pc' do tipo 'struct Computador'
    struct Computador meu_pc;

    // Usando o operador PONTO (.) para preencher as "gavetas" da struct
    meu_pc.modelo = "Dell G15";
    meu_pc.preco = 5400.50;
    meu_pc.ram_gb = 16;

    printf("--- Especificacoes do PC ---\n");
    printf("Modelo: %s\n", meu_pc.modelo);
    printf("RAM:    %d GB\n", meu_pc.ram_gb);
    printf("Preco:  R$ %.2f\n", meu_pc.preco);

    return 0;
}