#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    // Equality (==)
    printf("Is A equal to B? %d\n", a == b); // 0 (False)

    // Inequality / Difference (!=)
    printf("Is A different from B? %d\n", a != b); // 1 (True)

    // Greater than and Less than
    printf("Is A less than B? %d\n", a < b);    // 1 (True)
    printf("Is A greater than B? %d\n", a > b);    // 0 (False)

    return 0;
}