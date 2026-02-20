#include <stdio.h>

// Think of postfix increment as: "Use the value now and change it later".

int main() {
    int i = 10;
    int j;

    // First, it calculates 5 + 10 = 15. Saves 15 into j.
    // ONLY AFTER that, i becomes 11.
    j = 5 + i++;

    printf("--- POSTFIX INCREMENT ---\n");
    printf("Value of j (used original i): %d\n", j); // 15
    printf("Value of i (changed later): %d\n", i);    // 11

    return 0;
}