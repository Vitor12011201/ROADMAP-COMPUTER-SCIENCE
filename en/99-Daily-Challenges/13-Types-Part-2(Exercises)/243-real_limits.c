/* Objective: Visualize the actual maximum limits of integer types using the C standard library.
Instructions:
1. Include the <limits.h> library at the top of your code.
2. In main, use the standard constants INT_MAX (maximum signed int) and UINT_MAX (maximum unsigned int).
3. Print both on the screen. For UINT_MAX, remember to use the %u format specifier (for unsigned).
Reflection: Check if on your computer UINT_MAX is exactly double of INT_MAX + 1. */

#include <stdio.h>
#include <limits.h>

int main()
{
    printf("UINT_MAX: %u\n", UINT_MAX);
    printf("INT_MAX: %d\n", INT_MAX);

    return 0;
}