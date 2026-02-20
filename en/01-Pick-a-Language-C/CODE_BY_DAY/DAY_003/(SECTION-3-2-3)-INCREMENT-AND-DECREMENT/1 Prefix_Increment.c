#include <stdio.h>

int main() {
    int i = 10;
    int j;

    // First, i becomes 11.
    // THEN it calculates 5 + 11 = 16. Saves 16 into j.
    j = 5 + ++i;

    printf("--- PREFIX INCREMENT ---\n");
    printf("Value of j (used new i): %d\n", j); // 16
    printf("Value of i (changed before): %d\n", i); // 11

    return 0;
}