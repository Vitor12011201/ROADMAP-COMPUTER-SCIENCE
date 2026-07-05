/* Objective: Practice how C converts different integers and negative numbers to the Boolean logical type.
Instructions:
Include <stdio.h> and <stdbool.h> (to be able to use the bool type).
Create a bool variable called false_test and assign it the value 0.
Create two other bool variables: true_test receiving 100 and negative_test receiving -5.
Print the final numeric value of these three variables using %d.
Reflection: What happened to -5 and 100 when they entered the Boolean variable? */
/* Answer: 100 and -5 become true, because in C any value different from 0 is considered true. When these values are stored in a bool variable, they become 1. */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool false_test = 0;
    bool true_test = 100;
    bool negative_test = -5;

    printf("false_test: %d\n", false_test);
    printf("true_test: %d\n", true_test);
    printf("negative_test: %d\n", negative_test);

    return 0;
}