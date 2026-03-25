#include <stdio.h>

// Objective: Demonstrate the "Zero-Initialization" trick.
// When at least one field is initialized, C automatically zeros out all others.

struct Smartphone {
    char *model;
    int ram;
    int storage;
};

int main() {
    // We initialize only the model; the other fields will be set to 0
    struct Smartphone s1 = {.model = "iPhone 16 - Apple"};

    printf("Model: %s\n", s1.model);
    printf("RAM: %d GB\n", s1.ram); // Automatically initialized to zero
    printf("Storage: %d GB\n", s1.storage); // Automatically initialized to zero

    return 0;
}