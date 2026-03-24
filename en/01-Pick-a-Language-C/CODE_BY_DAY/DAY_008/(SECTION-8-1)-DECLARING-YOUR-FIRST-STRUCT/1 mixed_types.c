#include <stdio.h>

// Definition of the blueprint (Type: struct Computer)
// Usually placed outside of main to be used anywhere in the file
struct Computer {
    char *model;
    float price;
    int ram_gb;
};

int main() {
    // Declaring the variable 'my_pc' of type 'struct Computer'
    struct Computer my_pc;

    // Using the DOT operator (.) to fill the "slots" (members) of the struct
    my_pc.model = "Dell G15";
    my_pc.price = 5400.50;
    my_pc.ram_gb = 16;

    printf("--- PC Specifications ---\n");
    printf("Model: %s\n", my_pc.model);
    printf("RAM:   %d GB\n", my_pc.ram_gb);
    printf("Price: $ %.2f\n", my_pc.price);

    return 0;
}