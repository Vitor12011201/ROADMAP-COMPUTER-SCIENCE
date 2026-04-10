#include <stdio.h>

/* OBJECTIVE: Use typedef to provide context to the meaning of a variable.
 */

typedef float Money;
typedef int Kilometers;

int main() {
    Money balance = 1500.75;
    Kilometers distance = 42;

    printf("Current Balance: $ %.2f\n", balance);
    printf("Distance traveled: %d km\n", distance);

    return 0;
}