#include <stdio.h>

/* Create a program that:
Calculates and prints how many bytes would be required to store an array of 150 integers (int).
Calculates and prints how many bytes would be required for an array of 10 floats.
Use only sizeof with type notation, for example: sizeof(int [150]) */

int main () {

    int int_size = sizeof(int[150]);
    printf("It will take [%d] Bytes to create an array of 150 integers\n", int_size);

    int float_size = sizeof(float[10]);
    printf("It will take [%d] Bytes to create an array of 10 floats\n", float_size);

    return 0;
}