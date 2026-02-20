// Function with no return value (Void Function)

#include <stdio.h>

// Creates a function that returns nothing and takes no parameters
void message(void)
{
    printf("Hello program!\n");
}

int main() {
    message(); // Does not return any value or take arguments
    return 0;
}