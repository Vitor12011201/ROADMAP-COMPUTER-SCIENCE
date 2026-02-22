#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Testing random generation with srand seeding
    printf("Rand test with srand: \n");

    /* srand(time(NULL)) seeds the random number generator
       using the current system time.
    */
    srand(time(NULL));

    printf("%d\n", rand());
    printf("%d\n", rand());
    printf("%d\n", rand());

    return 0;
}