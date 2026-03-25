#include <stdio.h>

// OBJECTIVE: Initialize the struct following the exact order of the field declarations.
// This method is fast but requires you to know the exact order defined in the struct.

struct Smartphone {
    char *brand;
    int memory_gb;
    float price;
};

int main() {
    // Initialization in the exact ORDER of the struct declaration
    // "Samsung" -> brand | 128 -> memory | 2500.00 -> price
    struct Smartphone s1 = {"Samsung", 128, 2500.00};

    printf("Smartphone 1: %s, %dGB, $ %.2f\n", s1.brand, s1.memory_gb, s1.price);

    return 0;
}