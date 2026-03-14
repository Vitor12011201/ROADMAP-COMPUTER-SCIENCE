#include <stdio.h>

// Usamos a notação a[] que é visualmente mais fácil de ler para arrays
void dobrar_valores(int a[], int tam) {
    for (int i = 0; i < tam; i++) {
        // Pega o valor que estava na memória, multiplica por 2
        // e guarda o resultado no mesmo lugar (sobrescreve)
        a[i] = a[i] * 2;
    }
}

int main() {
    int apostas[] = {100, 200, 500};

    // Ao passar 'apostas', estamos passando o endereço de onde os números moram
    dobrar_valores(apostas, 3);

    // O array original agora tem os valores dobrados
    printf("Novas apostas: %d, %d, %d\n", apostas[0], apostas[1], apostas[2]);

    return 0;
}