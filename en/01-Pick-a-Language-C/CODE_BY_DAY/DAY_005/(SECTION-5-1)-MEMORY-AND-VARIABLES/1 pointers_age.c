#include <stdio.h>

int main(void) {
    // A common variable. C reserves a "locker" in memory,
    // puts the number 22 inside it, and names the locker 'age'.
    int age = 22;

    // The '&' operator (ampersand) is the key to finding out
    // WHAT the door number of that locker is.
    // We use %p to print this address (in hexadecimal).
    printf("The value stored in the 'age' locker is: %d\n", age);

    // The (void *) is just to keep printf from complaining; focus on &age
    printf("The door number (address) of 'age' is: %p\n", (void *)&age);

    return 0;
}