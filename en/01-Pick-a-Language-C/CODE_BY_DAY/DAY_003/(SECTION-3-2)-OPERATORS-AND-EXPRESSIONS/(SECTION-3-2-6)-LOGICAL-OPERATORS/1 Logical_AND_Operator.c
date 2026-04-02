#include <stdio.h>

// Logical AND Operator - &&

int main() {
    int age = 20;
    int has_license = 1; // True

    // It only enters if BOTH conditions are true
    if (age >= 18 && has_license) {
        printf("Can legally drive.\n");
    } else {
        printf("Cannot drive.\n");
    }

    return 0;
}