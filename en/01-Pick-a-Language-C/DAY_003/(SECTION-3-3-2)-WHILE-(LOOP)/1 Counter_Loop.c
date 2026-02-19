#include <stdio.h>

int main() {
    int i = 0; // 1. We start at zero (Initialization)

    // 2. The question: "is i still less than 10?" (Condition)
    while (i < 10) {
        printf("i is now %d!\n", i);

        i++; // 3. IMPORTANT: Increase i so the loop eventually ends! (Update/Increment)
    }

    printf("End\n");
    return 0;
}