#include <stdio.h>

int main() {
    // 1. i = 0 (Começa aqui)
    // 2. i < 5 (Pergunta antes de cada volta)
    // 3. i++   (Faz isso NO FINAL de cada volta)
    for (int i = 0; i < 5; i++) {
        printf("Contagem: %d\n", i);
    }

    return 0;
}