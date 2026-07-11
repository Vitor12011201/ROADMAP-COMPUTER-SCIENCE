/* Objective: Observe what happens when we mix a negative int with an unsigned int in the same expression and the rule forces conversion to unsigned.
Instructions:
1. Declare int signed_var = -10;.
2. Declare unsigned int unsigned_var = 5;.
3. Create a conditional structure to test which number is greater: if (signed_var > unsigned_var).
4. If the if is true, print: "-10 is greater than 5?! The unsigned rule swallowed the sign!". Otherwise, print the expected: "5 is greater than -10". */

#include <stdio.h>

int main()
{

    int signed_var = -10;
    unsigned int unsigned_var = 5;

    if (signed_var > unsigned_var)
    {
        printf("-10 is greater than 5?! The unsigned rule swallowed the sign!\n");
    } else
    {
        printf("5 is greater than -10\n");
    }

    return 0;

}