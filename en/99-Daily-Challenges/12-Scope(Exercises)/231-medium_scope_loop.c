/* Objective: Apply variable definition inside a loop block, understanding that it is created and destroyed each iteration
Create a program that:
1. Use a for loop that goes from 0 to 4.
2. Inside the loop block, define an int variable temporary = i * 3.
3. Print the value of temporary.
4. Outside the loop (after the braces), try to print temporary (this should cause a compilation error – leave it commented and explain why).
5. In the same program, before the loop, declare an int variable accumulator = 0.
6. Inside the loop, add temporary to accumulator.
7. After the loop, print accumulator. */

#include <stdio.h>

int main()
{
    int accumulator = 0;

    printf("Numbers inside the for loop:\n");

    for (int i = 0; i < 5; i++)
    {
        int temporary = i * 3;

        accumulator = accumulator + temporary;

        printf("%d\n", temporary);
    }

    // printf("%d", temporary);
    // Compilation error:
    // the variable "temporary" exists only
    // inside the for loop block.

    printf("\n");

    printf("Value of accumulator variable: %d\n", accumulator);

    return 0;
}