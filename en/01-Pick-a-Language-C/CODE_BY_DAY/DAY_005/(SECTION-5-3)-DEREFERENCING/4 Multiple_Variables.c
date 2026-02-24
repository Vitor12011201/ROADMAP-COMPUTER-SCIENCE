// A pointer can point to different things at different times. When you dereference it,
// the effect happens to the variable it is pointing to at that specific moment.

#include <stdio.h>

int main(void) {
    int beans = 10;
    int rice = 20;
    int *ptr;

    // Pointing to beans
    ptr = &beans;
    *ptr = 0; // Beans becomes 0

    // Pointing to rice
    ptr = &rice;
    *ptr = 50; // Rice becomes 50

    printf("Beans: %d, Rice: %d\n", beans, rice);
    return 0;
}