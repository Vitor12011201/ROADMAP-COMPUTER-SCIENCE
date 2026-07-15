/* Objective: Use explicit cast to force a precise floating-point division using variables originally declared as integers.
Instructions:
1. Declare int pizza_slices = 5; and int people = 2;.
2. Create a double variable slices_per_person;.
3. If you do slices_per_person = pizza_slices / people;, the result will be 2.0 due to integer division.
4. Fix this by applying explicit cast to only one of the variables at the time of the operation: slices_per_person = (double)pizza_slices / people;.
5. Print the result with %f (should display 2.500000). */

#include <stdio.h>

int main()
{

    int pizza_slices = 5;
    int people = 2;
    double slices_per_person;

    slices_per_person = pizza_slices / people;

    slices_per_person = (double)pizza_slices / people;

    printf("%f\n", slices_per_person);

    return 0;
}