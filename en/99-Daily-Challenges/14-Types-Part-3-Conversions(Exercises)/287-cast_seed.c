/* Objective: Use explicit cast to convert and truncate system time values to feed random number generators.
Instructions:
1. The standard function srand() (from <stdlib.h>) is used to seed the C random number generator and it strictly expects an argument of type unsigned int.
2. However, the function we use to get system time, time(NULL) (from <time.h>), returns a type called time_t (which is usually a 64-bit long long).
3. In your main, seed the generator by applying explicit cast cleanly: srand((unsigned int)time(NULL));.
4. Generate and print a random number between 1 and 10 using rand() % 10 + 1. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned int)time(NULL));

    int random_number = rand() % 10 + 1;

    printf("Random number: %d\n", random_number);

    return 0;
}