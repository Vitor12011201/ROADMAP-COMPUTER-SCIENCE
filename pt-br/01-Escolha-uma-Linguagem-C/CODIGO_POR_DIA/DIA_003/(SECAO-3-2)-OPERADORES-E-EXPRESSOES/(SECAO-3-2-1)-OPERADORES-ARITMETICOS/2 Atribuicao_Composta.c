#include <stdio.h>

int main() {
    int i = 10;

    i += 3;  // i vira 13 (é o mesmo que i = i + 3)
    i -= 5;  // i vira 8  (é o mesmo que i = i - 5)
    i *= 2;  // i vira 16 (é o mesmo que i = i * 2)
    i /= 4;  // i vira 4  (é o mesmo que i = i / 4)
    i %= 3;  // i vira 1  (é o mesmo que i = i % 3)

    printf("Valor final de i: %d\n", i);

    return 0;
}