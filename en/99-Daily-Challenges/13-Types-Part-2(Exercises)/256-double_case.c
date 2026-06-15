/* Objective: Solve the precision loss problem using the right tool for the job (double).
Instructions:
1. Declare double f_double = 3.14159265358; and a double g_double = 0.000000000002;.
2. Add them together (f_double += g_double;).
3. Print the result with %.12f.
4. In the same file, use the DBL_DIG macro (from <float.h>) to print how many safe digits double offers on your system.
- Reflection: Why didn't double fail where float was embarrassed?
Answer: Because double has more bits to store the number. */

#include <stdio.h>
#include <float.h>

int main()
{

    double f_double = 3.14159265358;

    double g_double = 0.000000000002;

    f_double += g_double;

    printf("f_double: %.12f\n", f_double);
    printf("g_double: %.12f\n", g_double);

    printf("how many safe digits does double offer on my system: %d\n", DBL_DIG);

    return 0;

}