// Function with parameters but no return value

#include <stdio.h>

void show_number(int n) { // Has a parameter, but returns nothing
    printf("Your number is %d\n", n);
}

int main() {
    show_number(10); // Has an argument, but returns nothing
}