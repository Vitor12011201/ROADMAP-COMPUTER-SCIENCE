#include <stdio.h>
#include <stdbool.h>

int main() {
    int value = 12;

    // Test 1: Decision logic
    if (value) {
        printf("For the IF statement, 12 works as true.\n");
    }

    // Test 2: Mathematical comparison
    if (value == true) {
        printf("This will not appear.\n");
    } else {
        printf("The computer says: 12 is not equal to 1 (true).\n");
    }

    // Test 3: What happens under the hood?
    printf("Value of true: %d\n", true);
    printf("Result of (12 == 1): %d\n", (12 == 1));

    return 0;
}