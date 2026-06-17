/* Objective: Simulate saving binary data in text format and observe data loss if using the wrong precision.
Instructions:
1. In main, declare a double original = 0.12345678901234559; (the same 17-digit number from the book).
2. Simulate two "save files" using printf:
3. The first simulates saving with only the default typing precision: print the number using %.15f.
4. The second simulates saving with bit fidelity: print using %.17f (which is DBL_DECIMAL_DIG).
Question: Look at the two results on the screen. If you were to read the first result back into a program, would you recover the original 0.12345678901234559? Comment in the code. */
/* Answer: Not necessarily.
   When saving using only %.15f, some digits are lost
   due to rounding. If that value were read again by
   another program (e.g., using scanf), we might get
   a double slightly different from the original.
   When using %.17f (or DBL_DECIMAL_DIG), there are enough
   digits to reconstruct exactly the value stored in memory,
   preserving all bits of the double.
   */

#include <stdio.h>

int main()
{
    double original = 0.12345678901234559;

    printf("Original value stored in memory:\n");
    printf("%.17f\n\n", original);

    printf("Saving with 15 decimal places:\n");
    printf("%.15f\n\n", original);

    printf("Saving with 17 decimal places:\n");
    printf("%.17f\n", original);

    return 0;
}